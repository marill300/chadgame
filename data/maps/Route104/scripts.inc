Route104_RuiScript0::
# 4 "data/maps/Route104/scripts.pory"
	lock
# 5 "data/maps/Route104/scripts.pory"
	clearflag FLAG_RUI_MET
# 6 "data/maps/Route104/scripts.pory"
	addobject 35
# 7 "data/maps/Route104/scripts.pory"
	setobjectxy 35, 10, 30
# 9 "data/maps/Route104/scripts.pory"
	goto Route104_RuiScript
	return


Route104_RuiScript1::
# 16 "data/maps/Route104/scripts.pory"
	lock
# 17 "data/maps/Route104/scripts.pory"
	clearflag FLAG_RUI_MET
# 18 "data/maps/Route104/scripts.pory"
	addobject 35
# 19 "data/maps/Route104/scripts.pory"
	setobjectxy 35, 11, 30
# 21 "data/maps/Route104/scripts.pory"
	goto Route104_RuiScript
	return


Route104_RuiScript::
# 26 "data/maps/Route104/scripts.pory"
	applymovement 35, RuiApproach
# 27 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRui
# 29 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_0
# 30 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_RED, Route104_RuiScript_Text_1
# 32 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_2
# 33 "data/maps/Route104/scripts.pory"
	delay 30
# 35 "data/maps/Route104/scripts.pory"
	removeobject 35
# 36 "data/maps/Route104/scripts.pory"
	setflag FLAG_RUI_MET
# 37 "data/maps/Route104/scripts.pory"
	setvar VAR_RUI_104_ENCOUNTER, 1
# 38 "data/maps/Route104/scripts.pory"
	release
	end


# 44 "data/maps/Route104/scripts.pory"
RuiApproach:
# 45 "data/maps/Route104/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/Route104/scripts.pory"
PlayerFaceRui:
# 49 "data/maps/Route104/scripts.pory"
	face_down
	step_end

# 57 "data/maps/Route104/scripts.pory"

# 58 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 59 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 60 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 61 "data/maps/Route104/scripts.pory"

# 62 "data/maps/Route104/scripts.pory"

# 63 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 64 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 65 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 66 "data/maps/Route104/scripts.pory"
	.byte 0
# 67 "data/maps/Route104/scripts.pory"

# 68 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 69 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 70 "data/maps/Route104/scripts.pory"

# 71 "data/maps/Route104/scripts.pory"
	.2byte 0
# 72 "data/maps/Route104/scripts.pory"

# 73 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 74 "data/maps/Route104/scripts.pory"
	lockall
# 75 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 76 "data/maps/Route104/scripts.pory"
	end
# 77 "data/maps/Route104/scripts.pory"

# 78 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 79 "data/maps/Route104/scripts.pory"
	setflag(FLAG_RUI_MET)
# 80 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 81 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 82 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 83 "data/maps/Route104/scripts.pory"
	end
# 84 "data/maps/Route104/scripts.pory"

# 85 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 86 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 87 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 88 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 89 "data/maps/Route104/scripts.pory"
	return
# 90 "data/maps/Route104/scripts.pory"

# 91 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 92 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 93 "data/maps/Route104/scripts.pory"
	return
# 94 "data/maps/Route104/scripts.pory"

# 95 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 96 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 97 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 98 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 99 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 100 "data/maps/Route104/scripts.pory"
	return
# 101 "data/maps/Route104/scripts.pory"

# 102 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 103 "data/maps/Route104/scripts.pory"
	return
# 104 "data/maps/Route104/scripts.pory"

# 105 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 106 "data/maps/Route104/scripts.pory"
	lockall
# 107 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 108 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 109 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 111 "data/maps/Route104/scripts.pory"

# 112 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 113 "data/maps/Route104/scripts.pory"
	lockall
# 114 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 115 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 116 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 117 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 118 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route104/scripts.pory"
	delay 10
# 120 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 121 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 122 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 123 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 125 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route104/scripts.pory"
	delay 20
# 127 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 128 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 129 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 130 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 131 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 133 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 135 "data/maps/Route104/scripts.pory"

# 136 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 137 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 138 "data/maps/Route104/scripts.pory"
	checkplayergender
# 139 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 140 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 141 "data/maps/Route104/scripts.pory"
	return
# 142 "data/maps/Route104/scripts.pory"

# 143 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 144 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 145 "data/maps/Route104/scripts.pory"
	return
# 146 "data/maps/Route104/scripts.pory"

# 147 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 148 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 149 "data/maps/Route104/scripts.pory"
	return
# 150 "data/maps/Route104/scripts.pory"

# 151 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 152 "data/maps/Route104/scripts.pory"
	checkplayergender
# 153 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 154 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 155 "data/maps/Route104/scripts.pory"
	end
# 156 "data/maps/Route104/scripts.pory"

# 157 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 158 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 159 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 160 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 161 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 162 "data/maps/Route104/scripts.pory"
	closemessage
# 163 "data/maps/Route104/scripts.pory"
	delay 30
# 164 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 165 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 166 "data/maps/Route104/scripts.pory"
	waitfanfare
# 167 "data/maps/Route104/scripts.pory"
	closemessage
# 168 "data/maps/Route104/scripts.pory"
	delay 30
# 169 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 170 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 171 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 172 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 173 "data/maps/Route104/scripts.pory"
	closemessage
# 174 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 176 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 178 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 179 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 180 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 181 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 182 "data/maps/Route104/scripts.pory"
	releaseall
# 183 "data/maps/Route104/scripts.pory"
	end
# 184 "data/maps/Route104/scripts.pory"

# 185 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 186 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 187 "data/maps/Route104/scripts.pory"
	step_end
# 188 "data/maps/Route104/scripts.pory"

# 189 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 190 "data/maps/Route104/scripts.pory"
	walk_down
# 191 "data/maps/Route104/scripts.pory"
	face_right
# 192 "data/maps/Route104/scripts.pory"
	step_end
# 193 "data/maps/Route104/scripts.pory"

# 194 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 195 "data/maps/Route104/scripts.pory"
	delay_4
# 196 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 197 "data/maps/Route104/scripts.pory"
	step_end
# 198 "data/maps/Route104/scripts.pory"

# 199 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 200 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 201 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 202 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 203 "data/maps/Route104/scripts.pory"
	releaseall
# 204 "data/maps/Route104/scripts.pory"
	end
# 205 "data/maps/Route104/scripts.pory"

# 206 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 207 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 208 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 209 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 210 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 211 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 212 "data/maps/Route104/scripts.pory"
	end
# 213 "data/maps/Route104/scripts.pory"

# 214 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 215 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 216 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 217 "data/maps/Route104/scripts.pory"
	releaseall
# 218 "data/maps/Route104/scripts.pory"
	end
# 219 "data/maps/Route104/scripts.pory"

# 220 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 221 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 222 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 223 "data/maps/Route104/scripts.pory"
	return
# 224 "data/maps/Route104/scripts.pory"

# 225 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 226 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 227 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 228 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 229 "data/maps/Route104/scripts.pory"
	end
# 230 "data/maps/Route104/scripts.pory"

# 231 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 232 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 233 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 234 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 235 "data/maps/Route104/scripts.pory"
	end
# 236 "data/maps/Route104/scripts.pory"

# 237 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 238 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 239 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 240 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 241 "data/maps/Route104/scripts.pory"
	end
# 242 "data/maps/Route104/scripts.pory"

# 243 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 244 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 245 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 246 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 247 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 248 "data/maps/Route104/scripts.pory"
	closemessage
# 249 "data/maps/Route104/scripts.pory"
	delay 30
# 250 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 251 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 252 "data/maps/Route104/scripts.pory"
	waitfanfare
# 253 "data/maps/Route104/scripts.pory"
	closemessage
# 254 "data/maps/Route104/scripts.pory"
	delay 30
# 255 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 256 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 257 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 258 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 259 "data/maps/Route104/scripts.pory"
	closemessage
# 260 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 262 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 264 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 265 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 266 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 267 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 268 "data/maps/Route104/scripts.pory"
	releaseall
# 269 "data/maps/Route104/scripts.pory"
	end
# 270 "data/maps/Route104/scripts.pory"

# 271 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 272 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 273 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 274 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 275 "data/maps/Route104/scripts.pory"
	releaseall
# 276 "data/maps/Route104/scripts.pory"
	end
# 277 "data/maps/Route104/scripts.pory"

# 278 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 279 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 280 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 281 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 282 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 283 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 284 "data/maps/Route104/scripts.pory"
	end
# 285 "data/maps/Route104/scripts.pory"

# 286 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 287 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 288 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 289 "data/maps/Route104/scripts.pory"
	releaseall
# 290 "data/maps/Route104/scripts.pory"
	end
# 291 "data/maps/Route104/scripts.pory"

# 292 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 293 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 294 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 295 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 299 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 300 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 301 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 302 "data/maps/Route104/scripts.pory"
	end
# 303 "data/maps/Route104/scripts.pory"

# 304 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 305 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 306 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 307 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 308 "data/maps/Route104/scripts.pory"
	end
# 309 "data/maps/Route104/scripts.pory"

# 310 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 311 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 312 "data/maps/Route104/scripts.pory"
	walk_down
# 313 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 314 "data/maps/Route104/scripts.pory"
	step_end
# 315 "data/maps/Route104/scripts.pory"

# 316 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 317 "data/maps/Route104/scripts.pory"
	walk_down
# 318 "data/maps/Route104/scripts.pory"
	step_end
# 319 "data/maps/Route104/scripts.pory"

# 320 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 321 "data/maps/Route104/scripts.pory"
	lock
# 322 "data/maps/Route104/scripts.pory"
	faceplayer
# 323 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 324 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 325 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 326 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 327 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 328 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 329 "data/maps/Route104/scripts.pory"
	release
# 330 "data/maps/Route104/scripts.pory"
	end
# 331 "data/maps/Route104/scripts.pory"

# 332 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 333 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 334 "data/maps/Route104/scripts.pory"
	release
# 335 "data/maps/Route104/scripts.pory"
	end
# 336 "data/maps/Route104/scripts.pory"

# 337 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 338 "data/maps/Route104/scripts.pory"
	lock
# 339 "data/maps/Route104/scripts.pory"
	faceplayer
# 340 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 341 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 342 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 343 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 344 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 345 "data/maps/Route104/scripts.pory"
	release
# 346 "data/maps/Route104/scripts.pory"
	end
# 347 "data/maps/Route104/scripts.pory"

# 348 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 349 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 350 "data/maps/Route104/scripts.pory"
	release
# 351 "data/maps/Route104/scripts.pory"
	end
# 352 "data/maps/Route104/scripts.pory"

# 353 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 354 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 355 "data/maps/Route104/scripts.pory"
	end
# 356 "data/maps/Route104/scripts.pory"

# 357 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 358 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 359 "data/maps/Route104/scripts.pory"
	end
# 360 "data/maps/Route104/scripts.pory"

# 361 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 362 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 363 "data/maps/Route104/scripts.pory"
	end
# 364 "data/maps/Route104/scripts.pory"

# 365 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 366 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 367 "data/maps/Route104/scripts.pory"
	end
# 368 "data/maps/Route104/scripts.pory"

# 369 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 370 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 371 "data/maps/Route104/scripts.pory"
	end
# 372 "data/maps/Route104/scripts.pory"

# 373 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 374 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 375 "data/maps/Route104/scripts.pory"
	end
# 376 "data/maps/Route104/scripts.pory"

# 377 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 378 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 379 "data/maps/Route104/scripts.pory"
	end
# 380 "data/maps/Route104/scripts.pory"

# 381 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 382 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 383 "data/maps/Route104/scripts.pory"
	end
# 384 "data/maps/Route104/scripts.pory"

# 385 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 386 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 387 "data/maps/Route104/scripts.pory"
	end
# 388 "data/maps/Route104/scripts.pory"

# 389 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 390 "data/maps/Route104/scripts.pory"
	lock
# 391 "data/maps/Route104/scripts.pory"
	faceplayer
# 392 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 393 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 394 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 395 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 396 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 397 "data/maps/Route104/scripts.pory"
	release
# 398 "data/maps/Route104/scripts.pory"
	end
# 399 "data/maps/Route104/scripts.pory"

# 400 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 401 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 402 "data/maps/Route104/scripts.pory"
	release
# 403 "data/maps/Route104/scripts.pory"
	end
# 404 "data/maps/Route104/scripts.pory"

# 405 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 406 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 407 "data/maps/Route104/scripts.pory"
	end
# 408 "data/maps/Route104/scripts.pory"

# 409 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 410 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 411 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 412 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 413 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 415 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 416 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 418 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 419 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 420 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 421 "data/maps/Route104/scripts.pory"
	end
# 422 "data/maps/Route104/scripts.pory"

# 423 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 424 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 425 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 426 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 428 "data/maps/Route104/scripts.pory"

# 429 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 430 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 431 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 432 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 433 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 434 "data/maps/Route104/scripts.pory"
	waitmessage
# 435 "data/maps/Route104/scripts.pory"
	delay 30
# 436 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 437 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 438 "data/maps/Route104/scripts.pory"
	waitfanfare
# 439 "data/maps/Route104/scripts.pory"
	closemessage
# 440 "data/maps/Route104/scripts.pory"
	delay 30
# 441 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 442 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 443 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 444 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 445 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 447 "data/maps/Route104/scripts.pory"

# 448 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 449 "data/maps/Route104/scripts.pory"
	delay 50
# 450 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 451 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 453 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 454 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 455 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 457 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 458 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 459 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 460 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 461 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 463 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 464 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 465 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 466 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 467 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 468 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 469 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 470 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 471 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 472 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 473 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 474 "data/maps/Route104/scripts.pory"
	end
# 475 "data/maps/Route104/scripts.pory"

# 476 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 477 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 478 "data/maps/Route104/scripts.pory"
	releaseall
# 479 "data/maps/Route104/scripts.pory"
	end
# 480 "data/maps/Route104/scripts.pory"

# 481 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 482 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 483 "data/maps/Route104/scripts.pory"
	releaseall
# 484 "data/maps/Route104/scripts.pory"
	end
# 485 "data/maps/Route104/scripts.pory"

# 486 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 487 "data/maps/Route104/scripts.pory"
	walk_down
# 488 "data/maps/Route104/scripts.pory"
	walk_down
# 489 "data/maps/Route104/scripts.pory"
	walk_down
# 490 "data/maps/Route104/scripts.pory"
	walk_down
# 491 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 492 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 493 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 494 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 508 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 509 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 510 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 511 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 512 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 519 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 520 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 521 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 522 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 523 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 524 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 584 "data/maps/Route104/scripts.pory"
	step_end
# 585 "data/maps/Route104/scripts.pory"

# 586 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 606 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 607 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 608 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 611 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 612 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 613 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 614 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 615 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 616 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 617 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 619 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 620 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 621 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 623 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 624 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 625 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 626 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 627 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 628 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 634 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 635 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 636 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 637 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 638 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 639 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 640 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 646 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 647 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 648 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 649 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 659 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 660 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 661 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 662 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route104/scripts.pory"
	walk_right
# 664 "data/maps/Route104/scripts.pory"
	walk_right
# 665 "data/maps/Route104/scripts.pory"
	walk_down
# 666 "data/maps/Route104/scripts.pory"
	walk_down
# 667 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 668 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 669 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 670 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 671 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 672 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 673 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 674 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 675 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 676 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 677 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 678 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 679 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 680 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 681 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 682 "data/maps/Route104/scripts.pory"
	walk_down
# 683 "data/maps/Route104/scripts.pory"
	walk_down
# 684 "data/maps/Route104/scripts.pory"
	step_end
# 685 "data/maps/Route104/scripts.pory"

# 686 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 687 "data/maps/Route104/scripts.pory"
	walk_down
# 688 "data/maps/Route104/scripts.pory"
	walk_down
# 689 "data/maps/Route104/scripts.pory"
	walk_down
# 690 "data/maps/Route104/scripts.pory"
	walk_down
# 691 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 692 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 693 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 694 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 708 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 709 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 710 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 711 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 712 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 719 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 720 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 721 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 722 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 723 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 724 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 808 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 809 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 810 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 811 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 812 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 813 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 814 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 815 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 816 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 817 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 818 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 819 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 820 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 821 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 822 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 823 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 824 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 825 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 826 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 827 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 828 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 829 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 830 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 831 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 832 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 833 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 834 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 835 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 836 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 837 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 838 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 839 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 840 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 841 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 842 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 843 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 844 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 845 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 846 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 847 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 848 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 849 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 850 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 851 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 852 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 853 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 854 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 855 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 856 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 857 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 858 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 859 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 860 "data/maps/Route104/scripts.pory"
	walk_right
# 861 "data/maps/Route104/scripts.pory"
	walk_right
# 862 "data/maps/Route104/scripts.pory"
	walk_down
# 863 "data/maps/Route104/scripts.pory"
	walk_down
# 864 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 865 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 866 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 867 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 868 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 869 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 870 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 871 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 872 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 873 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 874 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 875 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 876 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 877 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 878 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 879 "data/maps/Route104/scripts.pory"
	walk_down
# 880 "data/maps/Route104/scripts.pory"
	walk_down
# 881 "data/maps/Route104/scripts.pory"
	step_end
# 882 "data/maps/Route104/scripts.pory"

# 883 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 884 "data/maps/Route104/scripts.pory"
	walk_left
# 885 "data/maps/Route104/scripts.pory"
	walk_down
# 886 "data/maps/Route104/scripts.pory"
	walk_down
# 887 "data/maps/Route104/scripts.pory"
	step_end
# 888 "data/maps/Route104/scripts.pory"

# 889 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 890 "data/maps/Route104/scripts.pory"
	walk_down
# 891 "data/maps/Route104/scripts.pory"
	step_end
# 892 "data/maps/Route104/scripts.pory"

# 893 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 894 "data/maps/Route104/scripts.pory"
	walk_down
# 895 "data/maps/Route104/scripts.pory"
	walk_left
# 896 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 897 "data/maps/Route104/scripts.pory"
	step_end
# 898 "data/maps/Route104/scripts.pory"

# 899 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 900 "data/maps/Route104/scripts.pory"
	walk_down
# 901 "data/maps/Route104/scripts.pory"
	walk_down
# 902 "data/maps/Route104/scripts.pory"
	step_end
# 903 "data/maps/Route104/scripts.pory"

# 904 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 905 "data/maps/Route104/scripts.pory"
	walk_down
# 906 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 907 "data/maps/Route104/scripts.pory"
	step_end
# 908 "data/maps/Route104/scripts.pory"

# 909 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 910 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 911 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 912 "data/maps/Route104/scripts.pory"
	end
# 913 "data/maps/Route104/scripts.pory"

# 914 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 915 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 916 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 917 "data/maps/Route104/scripts.pory"
	end
# 918 "data/maps/Route104/scripts.pory"

# 919 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 920 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 921 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 922 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 923 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 924 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 925 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 926 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 927 "data/maps/Route104/scripts.pory"
	release
# 928 "data/maps/Route104/scripts.pory"
	end
# 929 "data/maps/Route104/scripts.pory"

# 930 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 931 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 932 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 933 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 934 "data/maps/Route104/scripts.pory"
	release
# 935 "data/maps/Route104/scripts.pory"
	end
# 936 "data/maps/Route104/scripts.pory"

# 937 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 938 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 939 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 940 "data/maps/Route104/scripts.pory"
	release
# 941 "data/maps/Route104/scripts.pory"
	end
# 942 "data/maps/Route104/scripts.pory"

# 943 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 944 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 945 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 946 "data/maps/Route104/scripts.pory"
	release
# 947 "data/maps/Route104/scripts.pory"
	end
# 948 "data/maps/Route104/scripts.pory"

# 949 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 950 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 951 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 952 "data/maps/Route104/scripts.pory"
	release
# 953 "data/maps/Route104/scripts.pory"
	end
# 954 "data/maps/Route104/scripts.pory"

# 955 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 956 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 957 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 958 "data/maps/Route104/scripts.pory"
	end
# 959 "data/maps/Route104/scripts.pory"

# 960 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 961 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 962 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 963 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 964 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 965 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 966 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 967 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 968 "data/maps/Route104/scripts.pory"
	release
# 969 "data/maps/Route104/scripts.pory"
	end
# 970 "data/maps/Route104/scripts.pory"

# 971 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 972 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 973 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 974 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 975 "data/maps/Route104/scripts.pory"
	release
# 976 "data/maps/Route104/scripts.pory"
	end
# 977 "data/maps/Route104/scripts.pory"

# 978 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 979 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 980 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 981 "data/maps/Route104/scripts.pory"
	release
# 982 "data/maps/Route104/scripts.pory"
	end
# 983 "data/maps/Route104/scripts.pory"

# 984 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 985 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 986 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 987 "data/maps/Route104/scripts.pory"
	release
# 988 "data/maps/Route104/scripts.pory"
	end
# 989 "data/maps/Route104/scripts.pory"

# 990 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 991 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 992 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 993 "data/maps/Route104/scripts.pory"
	release
# 994 "data/maps/Route104/scripts.pory"
	end
# 995 "data/maps/Route104/scripts.pory"

# 996 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 997 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 998 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 999 "data/maps/Route104/scripts.pory"
	end
# 1000 "data/maps/Route104/scripts.pory"

# 1001 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1002 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1003 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1004 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1005 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1006 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1007 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1008 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1009 "data/maps/Route104/scripts.pory"
	release
# 1010 "data/maps/Route104/scripts.pory"
	end
# 1011 "data/maps/Route104/scripts.pory"

# 1012 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1013 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1014 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1015 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1016 "data/maps/Route104/scripts.pory"
	release
# 1017 "data/maps/Route104/scripts.pory"
	end
# 1018 "data/maps/Route104/scripts.pory"

# 1019 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1020 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1021 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1022 "data/maps/Route104/scripts.pory"
	release
# 1023 "data/maps/Route104/scripts.pory"
	end
# 1024 "data/maps/Route104/scripts.pory"

# 1025 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1026 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1027 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1028 "data/maps/Route104/scripts.pory"
	release
# 1029 "data/maps/Route104/scripts.pory"
	end
# 1030 "data/maps/Route104/scripts.pory"

# 1031 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1032 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1033 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1034 "data/maps/Route104/scripts.pory"
	release
# 1035 "data/maps/Route104/scripts.pory"
	end
# 1036 "data/maps/Route104/scripts.pory"

# 1037 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1038 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1039 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1040 "data/maps/Route104/scripts.pory"
	end
# 1041 "data/maps/Route104/scripts.pory"

# 1042 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1043 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1044 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1045 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1046 "data/maps/Route104/scripts.pory"
	release
# 1047 "data/maps/Route104/scripts.pory"
	end
# 1048 "data/maps/Route104/scripts.pory"

# 1049 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1050 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1051 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1052 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1053 "data/maps/Route104/scripts.pory"
	release
# 1054 "data/maps/Route104/scripts.pory"
	end
# 1055 "data/maps/Route104/scripts.pory"

# 1056 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1057 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1058 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1059 "data/maps/Route104/scripts.pory"
	end
# 1060 "data/maps/Route104/scripts.pory"

# 1061 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1062 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1063 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1064 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1065 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1066 "data/maps/Route104/scripts.pory"

# 1067 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1068 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1069 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1070 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1071 "data/maps/Route104/scripts.pory"

# 1072 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1073 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1074 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1075 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1076 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1077 "data/maps/Route104/scripts.pory"

# 1078 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1079 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1080 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1081 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1082 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1083 "data/maps/Route104/scripts.pory"

# 1084 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1085 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1086 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1087 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1088 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1089 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1092 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1093 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1094 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1095 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1096 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1097 "data/maps/Route104/scripts.pory"

# 1098 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1099 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1100 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1101 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1102 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1103 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1104 "data/maps/Route104/scripts.pory"

# 1105 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1106 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1108 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1109 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1110 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1111 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1112 "data/maps/Route104/scripts.pory"

# 1113 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1114 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1116 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1117 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1118 "data/maps/Route104/scripts.pory"

# 1119 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1120 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1121 "data/maps/Route104/scripts.pory"

# 1122 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1123 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1124 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1125 "data/maps/Route104/scripts.pory"

# 1126 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1127 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1128 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1129 "data/maps/Route104/scripts.pory"

# 1130 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1131 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1132 "data/maps/Route104/scripts.pory"

# 1133 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1134 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1135 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1136 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1137 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1138 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1139 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1140 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1141 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1142 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1143 "data/maps/Route104/scripts.pory"

# 1144 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1145 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1146 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1147 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1148 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1149 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1150 "data/maps/Route104/scripts.pory"

# 1151 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1152 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1153 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1154 "data/maps/Route104/scripts.pory"

# 1155 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1156 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1157 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1158 "data/maps/Route104/scripts.pory"

# 1159 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1160 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1161 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1162 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1163 "data/maps/Route104/scripts.pory"

# 1164 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1165 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1166 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1167 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1168 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1169 "data/maps/Route104/scripts.pory"

# 1170 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1171 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1172 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1173 "data/maps/Route104/scripts.pory"

# 1174 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1175 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1176 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1177 "data/maps/Route104/scripts.pory"

# 1178 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1179 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1180 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1181 "data/maps/Route104/scripts.pory"

# 1182 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1183 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1184 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1185 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1186 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1187 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1188 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1189 "data/maps/Route104/scripts.pory"

# 1190 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1191 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1192 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1193 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1194 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1195 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1196 "data/maps/Route104/scripts.pory"

# 1197 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1198 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1199 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1200 "data/maps/Route104/scripts.pory"

# 1201 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1202 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1203 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1204 "data/maps/Route104/scripts.pory"

# 1205 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1206 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1207 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1208 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1209 "data/maps/Route104/scripts.pory"

# 1210 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1211 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1212 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1213 "data/maps/Route104/scripts.pory"

# 1214 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1215 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1216 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1217 "data/maps/Route104/scripts.pory"

# 1218 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1219 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1220 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1221 "data/maps/Route104/scripts.pory"

# 1222 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1223 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1224 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1225 "data/maps/Route104/scripts.pory"

# 1226 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1227 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1228 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1229 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1230 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1231 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1232 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

Route104_RuiScript_Text_0:
# 29 "data/maps/Route104/scripts.pory"
	.string "Big Ben tower of london beatles\n"
	.string "manchester united manchester city\l"
	.string "stonehenge$"

Route104_RuiScript_Text_1:
# 31 "data/maps/Route104/scripts.pory"
	.string "God save the queen.$"

Route104_RuiScript_Text_2:
# 32 "data/maps/Route104/scripts.pory"
	.string "The United Kingdom$"
