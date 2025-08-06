Route104_RuiScript0::
# 4 "data/maps/Route104/scripts.pory"
	lock
# 5 "data/maps/Route104/scripts.pory"
	clearflag FLAG_RUI_MET
# 6 "data/maps/Route104/scripts.pory"
	addobject 35
# 7 "data/maps/Route104/scripts.pory"
	setobjectxy 35, 10, 38
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
	setobjectxy 35, 11, 38
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
	random 6
# 36 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/Route104/scripts.pory"
	case 0, Route104_RuiScript_3
# 39 "data/maps/Route104/scripts.pory"
	case 1, Route104_RuiScript_4
# 41 "data/maps/Route104/scripts.pory"
	case 2, Route104_RuiScript_5
# 43 "data/maps/Route104/scripts.pory"
	case 3, Route104_RuiScript_6
# 45 "data/maps/Route104/scripts.pory"
	case 4, Route104_RuiScript_7
# 47 "data/maps/Route104/scripts.pory"
	case 5, Route104_RuiScript_8
Route104_RuiScript_1:
# 51 "data/maps/Route104/scripts.pory"
	getpartysize
# 52 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Route104_RuiScript_10
# 56 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_10
Route104_RuiScript_9:
# 59 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_11
# 61 "data/maps/Route104/scripts.pory"
	removeobject 35
# 62 "data/maps/Route104/scripts.pory"
	setflag FLAG_RUI_MET
# 63 "data/maps/Route104/scripts.pory"
	setvar VAR_RUI_104_ENCOUNTER, 1
# 64 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 65 "data/maps/Route104/scripts.pory"
	release
	end

Route104_RuiScript_3:
# 37 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_3
# 38 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_FRIGIBAX
	goto Route104_RuiScript_1

Route104_RuiScript_4:
# 39 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_4
# 40 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_TINKATINK
	goto Route104_RuiScript_1

Route104_RuiScript_5:
# 41 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_5
# 42 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_YANMA
	goto Route104_RuiScript_1

Route104_RuiScript_6:
# 43 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_6
# 44 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_LAPRAS
	goto Route104_RuiScript_1

Route104_RuiScript_7:
# 45 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_7
# 46 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_SCRAGGY
	goto Route104_RuiScript_1

Route104_RuiScript_8:
# 47 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_8
# 48 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_DARUMAKA
	goto Route104_RuiScript_1

Route104_RuiScript_10:
# 53 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_9
	goto Route104_RuiScript_9


# 71 "data/maps/Route104/scripts.pory"
RuiApproach:
# 72 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/Route104/scripts.pory"
PlayerFaceRui:
# 76 "data/maps/Route104/scripts.pory"
	face_up
	step_end

# 84 "data/maps/Route104/scripts.pory"

# 85 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 86 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 87 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 88 "data/maps/Route104/scripts.pory"

# 89 "data/maps/Route104/scripts.pory"

# 90 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 91 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 92 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 93 "data/maps/Route104/scripts.pory"
	.byte 0
# 94 "data/maps/Route104/scripts.pory"

# 95 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 96 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 97 "data/maps/Route104/scripts.pory"

# 98 "data/maps/Route104/scripts.pory"
	.2byte 0
# 99 "data/maps/Route104/scripts.pory"

# 100 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 101 "data/maps/Route104/scripts.pory"
	lockall
# 102 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 103 "data/maps/Route104/scripts.pory"
	end
# 104 "data/maps/Route104/scripts.pory"

# 105 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 106 "data/maps/Route104/scripts.pory"
	setflag(FLAG_RUI_MET)
# 107 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 108 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 109 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 110 "data/maps/Route104/scripts.pory"
	end
# 111 "data/maps/Route104/scripts.pory"

# 112 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 113 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 114 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 115 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 116 "data/maps/Route104/scripts.pory"
	return
# 117 "data/maps/Route104/scripts.pory"

# 118 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 119 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 120 "data/maps/Route104/scripts.pory"
	return
# 121 "data/maps/Route104/scripts.pory"

# 122 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 123 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 124 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 125 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 126 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 127 "data/maps/Route104/scripts.pory"
	return
# 128 "data/maps/Route104/scripts.pory"

# 129 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 130 "data/maps/Route104/scripts.pory"
	return
# 131 "data/maps/Route104/scripts.pory"

# 132 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 133 "data/maps/Route104/scripts.pory"
	lockall
# 134 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 135 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 136 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 138 "data/maps/Route104/scripts.pory"

# 139 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 140 "data/maps/Route104/scripts.pory"
	lockall
# 141 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 142 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 143 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 144 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 145 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route104/scripts.pory"
	delay 10
# 147 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 148 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 149 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 150 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 152 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route104/scripts.pory"
	delay 20
# 154 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 155 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 156 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 157 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 158 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 160 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 162 "data/maps/Route104/scripts.pory"

# 163 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 164 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 165 "data/maps/Route104/scripts.pory"
	checkplayergender
# 166 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 167 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 168 "data/maps/Route104/scripts.pory"
	return
# 169 "data/maps/Route104/scripts.pory"

# 170 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 171 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 172 "data/maps/Route104/scripts.pory"
	return
# 173 "data/maps/Route104/scripts.pory"

# 174 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 175 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 176 "data/maps/Route104/scripts.pory"
	return
# 177 "data/maps/Route104/scripts.pory"

# 178 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 179 "data/maps/Route104/scripts.pory"
	checkplayergender
# 180 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 181 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 182 "data/maps/Route104/scripts.pory"
	end
# 183 "data/maps/Route104/scripts.pory"

# 184 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 185 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 186 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 187 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 188 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 189 "data/maps/Route104/scripts.pory"
	closemessage
# 190 "data/maps/Route104/scripts.pory"
	delay 30
# 191 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 192 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 193 "data/maps/Route104/scripts.pory"
	waitfanfare
# 194 "data/maps/Route104/scripts.pory"
	closemessage
# 195 "data/maps/Route104/scripts.pory"
	delay 30
# 196 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 197 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 198 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 199 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 200 "data/maps/Route104/scripts.pory"
	closemessage
# 201 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 203 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 205 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 206 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 207 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 208 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 209 "data/maps/Route104/scripts.pory"
	releaseall
# 210 "data/maps/Route104/scripts.pory"
	end
# 211 "data/maps/Route104/scripts.pory"

# 212 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 213 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 214 "data/maps/Route104/scripts.pory"
	step_end
# 215 "data/maps/Route104/scripts.pory"

# 216 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 217 "data/maps/Route104/scripts.pory"
	walk_down
# 218 "data/maps/Route104/scripts.pory"
	face_right
# 219 "data/maps/Route104/scripts.pory"
	step_end
# 220 "data/maps/Route104/scripts.pory"

# 221 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 222 "data/maps/Route104/scripts.pory"
	delay_4
# 223 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 224 "data/maps/Route104/scripts.pory"
	step_end
# 225 "data/maps/Route104/scripts.pory"

# 226 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 227 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 228 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 229 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 230 "data/maps/Route104/scripts.pory"
	releaseall
# 231 "data/maps/Route104/scripts.pory"
	end
# 232 "data/maps/Route104/scripts.pory"

# 233 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 234 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 235 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 236 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 237 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 238 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 239 "data/maps/Route104/scripts.pory"
	end
# 240 "data/maps/Route104/scripts.pory"

# 241 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 242 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 243 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 244 "data/maps/Route104/scripts.pory"
	releaseall
# 245 "data/maps/Route104/scripts.pory"
	end
# 246 "data/maps/Route104/scripts.pory"

# 247 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 248 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 249 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 250 "data/maps/Route104/scripts.pory"
	return
# 251 "data/maps/Route104/scripts.pory"

# 252 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 253 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 254 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 255 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 256 "data/maps/Route104/scripts.pory"
	end
# 257 "data/maps/Route104/scripts.pory"

# 258 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 259 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 260 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 261 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 262 "data/maps/Route104/scripts.pory"
	end
# 263 "data/maps/Route104/scripts.pory"

# 264 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 265 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 266 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 267 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 268 "data/maps/Route104/scripts.pory"
	end
# 269 "data/maps/Route104/scripts.pory"

# 270 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 271 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 272 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 273 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 274 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 275 "data/maps/Route104/scripts.pory"
	closemessage
# 276 "data/maps/Route104/scripts.pory"
	delay 30
# 277 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 278 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 279 "data/maps/Route104/scripts.pory"
	waitfanfare
# 280 "data/maps/Route104/scripts.pory"
	closemessage
# 281 "data/maps/Route104/scripts.pory"
	delay 30
# 282 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 283 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 284 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 285 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 286 "data/maps/Route104/scripts.pory"
	closemessage
# 287 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 289 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 291 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 292 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 293 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 294 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 295 "data/maps/Route104/scripts.pory"
	releaseall
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 299 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 300 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 301 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 302 "data/maps/Route104/scripts.pory"
	releaseall
# 303 "data/maps/Route104/scripts.pory"
	end
# 304 "data/maps/Route104/scripts.pory"

# 305 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 306 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 307 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 308 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 309 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 310 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 315 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 316 "data/maps/Route104/scripts.pory"
	releaseall
# 317 "data/maps/Route104/scripts.pory"
	end
# 318 "data/maps/Route104/scripts.pory"

# 319 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 320 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 321 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 322 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 323 "data/maps/Route104/scripts.pory"
	end
# 324 "data/maps/Route104/scripts.pory"

# 325 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 326 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 327 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 328 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 329 "data/maps/Route104/scripts.pory"
	end
# 330 "data/maps/Route104/scripts.pory"

# 331 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 332 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 333 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 334 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 335 "data/maps/Route104/scripts.pory"
	end
# 336 "data/maps/Route104/scripts.pory"

# 337 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 338 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 339 "data/maps/Route104/scripts.pory"
	walk_down
# 340 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 341 "data/maps/Route104/scripts.pory"
	step_end
# 342 "data/maps/Route104/scripts.pory"

# 343 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 344 "data/maps/Route104/scripts.pory"
	walk_down
# 345 "data/maps/Route104/scripts.pory"
	step_end
# 346 "data/maps/Route104/scripts.pory"

# 347 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 348 "data/maps/Route104/scripts.pory"
	lock
# 349 "data/maps/Route104/scripts.pory"
	faceplayer
# 350 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 351 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 352 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 353 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 354 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 355 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 356 "data/maps/Route104/scripts.pory"
	release
# 357 "data/maps/Route104/scripts.pory"
	end
# 358 "data/maps/Route104/scripts.pory"

# 359 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 360 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 361 "data/maps/Route104/scripts.pory"
	release
# 362 "data/maps/Route104/scripts.pory"
	end
# 363 "data/maps/Route104/scripts.pory"

# 364 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 365 "data/maps/Route104/scripts.pory"
	lock
# 366 "data/maps/Route104/scripts.pory"
	faceplayer
# 367 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 368 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 369 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 370 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 371 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 372 "data/maps/Route104/scripts.pory"
	release
# 373 "data/maps/Route104/scripts.pory"
	end
# 374 "data/maps/Route104/scripts.pory"

# 375 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 376 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 377 "data/maps/Route104/scripts.pory"
	release
# 378 "data/maps/Route104/scripts.pory"
	end
# 379 "data/maps/Route104/scripts.pory"

# 380 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 381 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 382 "data/maps/Route104/scripts.pory"
	end
# 383 "data/maps/Route104/scripts.pory"

# 384 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 385 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 386 "data/maps/Route104/scripts.pory"
	end
# 387 "data/maps/Route104/scripts.pory"

# 388 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 389 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 390 "data/maps/Route104/scripts.pory"
	end
# 391 "data/maps/Route104/scripts.pory"

# 392 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 393 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 394 "data/maps/Route104/scripts.pory"
	end
# 395 "data/maps/Route104/scripts.pory"

# 396 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 397 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 398 "data/maps/Route104/scripts.pory"
	end
# 399 "data/maps/Route104/scripts.pory"

# 400 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 401 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 402 "data/maps/Route104/scripts.pory"
	end
# 403 "data/maps/Route104/scripts.pory"

# 404 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 405 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 406 "data/maps/Route104/scripts.pory"
	end
# 407 "data/maps/Route104/scripts.pory"

# 408 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 409 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 410 "data/maps/Route104/scripts.pory"
	end
# 411 "data/maps/Route104/scripts.pory"

# 412 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 413 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 414 "data/maps/Route104/scripts.pory"
	end
# 415 "data/maps/Route104/scripts.pory"

# 416 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 417 "data/maps/Route104/scripts.pory"
	lock
# 418 "data/maps/Route104/scripts.pory"
	faceplayer
# 419 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 420 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 421 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 422 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 423 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 424 "data/maps/Route104/scripts.pory"
	release
# 425 "data/maps/Route104/scripts.pory"
	end
# 426 "data/maps/Route104/scripts.pory"

# 427 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 428 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 429 "data/maps/Route104/scripts.pory"
	release
# 430 "data/maps/Route104/scripts.pory"
	end
# 431 "data/maps/Route104/scripts.pory"

# 432 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 433 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 434 "data/maps/Route104/scripts.pory"
	end
# 435 "data/maps/Route104/scripts.pory"

# 436 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 437 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 438 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 439 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 440 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 442 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 443 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 444 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 445 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 446 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 447 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 448 "data/maps/Route104/scripts.pory"
	end
# 449 "data/maps/Route104/scripts.pory"

# 450 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 451 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 452 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 453 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 455 "data/maps/Route104/scripts.pory"

# 456 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 457 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 458 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 459 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 461 "data/maps/Route104/scripts.pory"
	waitmessage
# 462 "data/maps/Route104/scripts.pory"
	delay 30
# 463 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 464 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 465 "data/maps/Route104/scripts.pory"
	waitfanfare
# 466 "data/maps/Route104/scripts.pory"
	closemessage
# 467 "data/maps/Route104/scripts.pory"
	delay 30
# 468 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 469 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 470 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 471 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 472 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 474 "data/maps/Route104/scripts.pory"

# 475 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 476 "data/maps/Route104/scripts.pory"
	delay 50
# 477 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 478 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 480 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 481 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 482 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 483 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 484 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 485 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 486 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 487 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 488 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 490 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 491 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 492 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 493 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 494 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 495 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 496 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 497 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 498 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 499 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 500 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 501 "data/maps/Route104/scripts.pory"
	end
# 502 "data/maps/Route104/scripts.pory"

# 503 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 504 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 505 "data/maps/Route104/scripts.pory"
	releaseall
# 506 "data/maps/Route104/scripts.pory"
	end
# 507 "data/maps/Route104/scripts.pory"

# 508 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 509 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 510 "data/maps/Route104/scripts.pory"
	releaseall
# 511 "data/maps/Route104/scripts.pory"
	end
# 512 "data/maps/Route104/scripts.pory"

# 513 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 514 "data/maps/Route104/scripts.pory"
	walk_down
# 515 "data/maps/Route104/scripts.pory"
	walk_down
# 516 "data/maps/Route104/scripts.pory"
	walk_down
# 517 "data/maps/Route104/scripts.pory"
	walk_down
# 518 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 519 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 520 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 521 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 535 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 536 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 537 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 538 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 539 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 546 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 547 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 548 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 549 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 550 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 551 "data/maps/Route104/scripts.pory"
	walk_fast_down
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
	walk_faster_down
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	step_end
# 612 "data/maps/Route104/scripts.pory"

# 613 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 617 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 618 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 619 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 620 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 621 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 623 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 624 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 625 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 626 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 627 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 628 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 634 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 635 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 636 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 637 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 638 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 639 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 640 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 641 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 642 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 643 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 644 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 645 "data/maps/Route104/scripts.pory"
	walk_fast_right
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
	walk_faster_right
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 686 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 687 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 688 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 689 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 690 "data/maps/Route104/scripts.pory"
	walk_right
# 691 "data/maps/Route104/scripts.pory"
	walk_right
# 692 "data/maps/Route104/scripts.pory"
	walk_down
# 693 "data/maps/Route104/scripts.pory"
	walk_down
# 694 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 695 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 696 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 697 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 698 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 699 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 700 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 701 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 702 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 703 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 704 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 705 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 706 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 707 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 708 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 709 "data/maps/Route104/scripts.pory"
	walk_down
# 710 "data/maps/Route104/scripts.pory"
	walk_down
# 711 "data/maps/Route104/scripts.pory"
	step_end
# 712 "data/maps/Route104/scripts.pory"

# 713 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 714 "data/maps/Route104/scripts.pory"
	walk_down
# 715 "data/maps/Route104/scripts.pory"
	walk_down
# 716 "data/maps/Route104/scripts.pory"
	walk_down
# 717 "data/maps/Route104/scripts.pory"
	walk_down
# 718 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 719 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 720 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 721 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 735 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 736 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 737 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 738 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 739 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 746 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 747 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 748 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 749 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 750 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 751 "data/maps/Route104/scripts.pory"
	walk_fast_down
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
	walk_faster_down
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 811 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 812 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 813 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 814 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 815 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 816 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 817 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 818 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 819 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 820 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 821 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 822 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 823 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 824 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 825 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 826 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 827 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 828 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 829 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 830 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 831 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 832 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 833 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 834 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 835 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 836 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 837 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 838 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 839 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 840 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 841 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 842 "data/maps/Route104/scripts.pory"
	walk_fast_right
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
	walk_faster_right
# 857 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 858 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 859 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 860 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 861 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 862 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 863 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 864 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 865 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 866 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 867 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 868 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 869 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 870 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 871 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 872 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 873 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 874 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 875 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 876 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 877 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 878 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 879 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 880 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 881 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 882 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 883 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 884 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 885 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 886 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 887 "data/maps/Route104/scripts.pory"
	walk_right
# 888 "data/maps/Route104/scripts.pory"
	walk_right
# 889 "data/maps/Route104/scripts.pory"
	walk_down
# 890 "data/maps/Route104/scripts.pory"
	walk_down
# 891 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 892 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 893 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 894 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 895 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 896 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 897 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 898 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 899 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 900 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 901 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 902 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 903 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 904 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 905 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 906 "data/maps/Route104/scripts.pory"
	walk_down
# 907 "data/maps/Route104/scripts.pory"
	walk_down
# 908 "data/maps/Route104/scripts.pory"
	step_end
# 909 "data/maps/Route104/scripts.pory"

# 910 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 911 "data/maps/Route104/scripts.pory"
	walk_left
# 912 "data/maps/Route104/scripts.pory"
	walk_down
# 913 "data/maps/Route104/scripts.pory"
	walk_down
# 914 "data/maps/Route104/scripts.pory"
	step_end
# 915 "data/maps/Route104/scripts.pory"

# 916 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 917 "data/maps/Route104/scripts.pory"
	walk_down
# 918 "data/maps/Route104/scripts.pory"
	step_end
# 919 "data/maps/Route104/scripts.pory"

# 920 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 921 "data/maps/Route104/scripts.pory"
	walk_down
# 922 "data/maps/Route104/scripts.pory"
	walk_left
# 923 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 924 "data/maps/Route104/scripts.pory"
	step_end
# 925 "data/maps/Route104/scripts.pory"

# 926 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 927 "data/maps/Route104/scripts.pory"
	walk_down
# 928 "data/maps/Route104/scripts.pory"
	walk_down
# 929 "data/maps/Route104/scripts.pory"
	step_end
# 930 "data/maps/Route104/scripts.pory"

# 931 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 932 "data/maps/Route104/scripts.pory"
	walk_down
# 933 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 934 "data/maps/Route104/scripts.pory"
	step_end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 937 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 938 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 939 "data/maps/Route104/scripts.pory"
	end
# 940 "data/maps/Route104/scripts.pory"

# 941 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 942 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 943 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 944 "data/maps/Route104/scripts.pory"
	end
# 945 "data/maps/Route104/scripts.pory"

# 946 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 947 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 948 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 949 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 950 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 951 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 952 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 953 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 954 "data/maps/Route104/scripts.pory"
	release
# 955 "data/maps/Route104/scripts.pory"
	end
# 956 "data/maps/Route104/scripts.pory"

# 957 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 958 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 959 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 960 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 961 "data/maps/Route104/scripts.pory"
	release
# 962 "data/maps/Route104/scripts.pory"
	end
# 963 "data/maps/Route104/scripts.pory"

# 964 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 965 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 966 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 967 "data/maps/Route104/scripts.pory"
	release
# 968 "data/maps/Route104/scripts.pory"
	end
# 969 "data/maps/Route104/scripts.pory"

# 970 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 971 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 972 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 973 "data/maps/Route104/scripts.pory"
	release
# 974 "data/maps/Route104/scripts.pory"
	end
# 975 "data/maps/Route104/scripts.pory"

# 976 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 977 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 978 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 979 "data/maps/Route104/scripts.pory"
	release
# 980 "data/maps/Route104/scripts.pory"
	end
# 981 "data/maps/Route104/scripts.pory"

# 982 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 983 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 984 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 985 "data/maps/Route104/scripts.pory"
	end
# 986 "data/maps/Route104/scripts.pory"

# 987 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 988 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 989 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 990 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 991 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 992 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 993 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 994 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 995 "data/maps/Route104/scripts.pory"
	release
# 996 "data/maps/Route104/scripts.pory"
	end
# 997 "data/maps/Route104/scripts.pory"

# 998 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 999 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1000 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1001 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1002 "data/maps/Route104/scripts.pory"
	release
# 1003 "data/maps/Route104/scripts.pory"
	end
# 1004 "data/maps/Route104/scripts.pory"

# 1005 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1006 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1007 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1008 "data/maps/Route104/scripts.pory"
	release
# 1009 "data/maps/Route104/scripts.pory"
	end
# 1010 "data/maps/Route104/scripts.pory"

# 1011 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1012 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1013 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1014 "data/maps/Route104/scripts.pory"
	release
# 1015 "data/maps/Route104/scripts.pory"
	end
# 1016 "data/maps/Route104/scripts.pory"

# 1017 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1018 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1019 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1020 "data/maps/Route104/scripts.pory"
	release
# 1021 "data/maps/Route104/scripts.pory"
	end
# 1022 "data/maps/Route104/scripts.pory"

# 1023 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1024 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1025 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1026 "data/maps/Route104/scripts.pory"
	end
# 1027 "data/maps/Route104/scripts.pory"

# 1028 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1029 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1030 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1031 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1032 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1033 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1034 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1035 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1036 "data/maps/Route104/scripts.pory"
	release
# 1037 "data/maps/Route104/scripts.pory"
	end
# 1038 "data/maps/Route104/scripts.pory"

# 1039 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1040 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1041 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1042 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1043 "data/maps/Route104/scripts.pory"
	release
# 1044 "data/maps/Route104/scripts.pory"
	end
# 1045 "data/maps/Route104/scripts.pory"

# 1046 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1047 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1048 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1049 "data/maps/Route104/scripts.pory"
	release
# 1050 "data/maps/Route104/scripts.pory"
	end
# 1051 "data/maps/Route104/scripts.pory"

# 1052 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1053 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1054 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1055 "data/maps/Route104/scripts.pory"
	release
# 1056 "data/maps/Route104/scripts.pory"
	end
# 1057 "data/maps/Route104/scripts.pory"

# 1058 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1059 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1060 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1061 "data/maps/Route104/scripts.pory"
	release
# 1062 "data/maps/Route104/scripts.pory"
	end
# 1063 "data/maps/Route104/scripts.pory"

# 1064 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1065 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1066 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1067 "data/maps/Route104/scripts.pory"
	end
# 1068 "data/maps/Route104/scripts.pory"

# 1069 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1070 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1071 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1072 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1073 "data/maps/Route104/scripts.pory"
	release
# 1074 "data/maps/Route104/scripts.pory"
	end
# 1075 "data/maps/Route104/scripts.pory"

# 1076 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1077 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1078 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1079 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1080 "data/maps/Route104/scripts.pory"
	release
# 1081 "data/maps/Route104/scripts.pory"
	end
# 1082 "data/maps/Route104/scripts.pory"

# 1083 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1084 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1085 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1086 "data/maps/Route104/scripts.pory"
	end
# 1087 "data/maps/Route104/scripts.pory"

# 1088 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1089 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1090 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1091 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1092 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1093 "data/maps/Route104/scripts.pory"

# 1094 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1095 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1096 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1097 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1098 "data/maps/Route104/scripts.pory"

# 1099 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1100 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1101 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1102 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1103 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1104 "data/maps/Route104/scripts.pory"

# 1105 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1106 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1108 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1109 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1110 "data/maps/Route104/scripts.pory"

# 1111 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1112 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1113 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1114 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1115 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1116 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1117 "data/maps/Route104/scripts.pory"

# 1118 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1119 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1120 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1121 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1122 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1123 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1124 "data/maps/Route104/scripts.pory"

# 1125 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1126 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1127 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1128 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1129 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1130 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1131 "data/maps/Route104/scripts.pory"

# 1132 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1133 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1134 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1135 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1136 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1137 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1138 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1139 "data/maps/Route104/scripts.pory"

# 1140 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1141 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1142 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1143 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1144 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1145 "data/maps/Route104/scripts.pory"

# 1146 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1147 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1148 "data/maps/Route104/scripts.pory"

# 1149 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1150 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1151 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1152 "data/maps/Route104/scripts.pory"

# 1153 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1154 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1156 "data/maps/Route104/scripts.pory"

# 1157 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1158 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1159 "data/maps/Route104/scripts.pory"

# 1160 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1161 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1162 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1163 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1164 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1165 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1166 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1167 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1168 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1169 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1170 "data/maps/Route104/scripts.pory"

# 1171 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1172 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1173 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1174 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1175 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1176 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1177 "data/maps/Route104/scripts.pory"

# 1178 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1179 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1180 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1181 "data/maps/Route104/scripts.pory"

# 1182 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1183 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1184 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1185 "data/maps/Route104/scripts.pory"

# 1186 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1187 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1188 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1189 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1190 "data/maps/Route104/scripts.pory"

# 1191 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1192 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1193 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1194 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1195 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1196 "data/maps/Route104/scripts.pory"

# 1197 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1198 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1199 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1200 "data/maps/Route104/scripts.pory"

# 1201 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1202 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1203 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1204 "data/maps/Route104/scripts.pory"

# 1205 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1206 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1207 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1208 "data/maps/Route104/scripts.pory"

# 1209 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1210 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1211 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1212 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1213 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1214 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1215 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1216 "data/maps/Route104/scripts.pory"

# 1217 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1218 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1219 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1220 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1221 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1222 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1223 "data/maps/Route104/scripts.pory"

# 1224 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1225 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1226 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1227 "data/maps/Route104/scripts.pory"

# 1228 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1229 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1230 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1231 "data/maps/Route104/scripts.pory"

# 1232 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1233 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1234 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1235 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1236 "data/maps/Route104/scripts.pory"

# 1237 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1238 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1239 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1240 "data/maps/Route104/scripts.pory"

# 1241 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1242 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1243 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1244 "data/maps/Route104/scripts.pory"

# 1245 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1246 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1247 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1248 "data/maps/Route104/scripts.pory"

# 1249 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1250 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1251 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1252 "data/maps/Route104/scripts.pory"

# 1253 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1254 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1255 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1256 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1257 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1258 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1259 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

Route104_RuiScript_Text_0:
# 29 "data/maps/Route104/scripts.pory"
	.string "Greetings, i'm Colin! I may be a 'Gacha'\n"
	.string "pro, but i'm not gonna be 'pulling' any\l"
	.string "punches today! Have at you!$"

Route104_RuiScript_Text_1:
# 31 "data/maps/Route104/scripts.pory"
	.string "Zenless Zone Zero.$"

Route104_RuiScript_Text_2:
# 32 "data/maps/Route104/scripts.pory"
	.string "check out my egg from vietnam$"

Route104_RuiScript_Text_3:
# 37 "data/maps/Route104/scripts.pory"
	.string "frigibax$"

Route104_RuiScript_Text_4:
# 39 "data/maps/Route104/scripts.pory"
	.string "tinkaton$"

Route104_RuiScript_Text_5:
# 41 "data/maps/Route104/scripts.pory"
	.string "yanma$"

Route104_RuiScript_Text_6:
# 43 "data/maps/Route104/scripts.pory"
	.string "lapras$"

Route104_RuiScript_Text_7:
# 45 "data/maps/Route104/scripts.pory"
	.string "scraggy$"

Route104_RuiScript_Text_8:
# 47 "data/maps/Route104/scripts.pory"
	.string "darumaka$"

Route104_RuiScript_Text_9:
# 53 "data/maps/Route104/scripts.pory"
	.string "you got too many$"

Route104_RuiScript_Text_10:
# 56 "data/maps/Route104/scripts.pory"
	.string "take this egg egg$"

Route104_RuiScript_Text_11:
# 59 "data/maps/Route104/scripts.pory"
	.string "You should go visit MR briney! i think He\n"
	.string "JUST came HOme!$"
