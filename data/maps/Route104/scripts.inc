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


Route104_WoodsBlocker::
# 26 "data/maps/Route104/scripts.pory"
	lock
# 27 "data/maps/Route104/scripts.pory"
	faceplayer
# 28 "data/maps/Route104/scripts.pory"
	msgbox Route104_WoodsBlocker_Text_0
# 29 "data/maps/Route104/scripts.pory"
	msgbox Route104_WoodsBlocker_Text_1
# 30 "data/maps/Route104/scripts.pory"
	release
	end


Route104_WoodsBlocker2::
# 36 "data/maps/Route104/scripts.pory"
	lock
# 37 "data/maps/Route104/scripts.pory"
	faceplayer
# 38 "data/maps/Route104/scripts.pory"
	msgbox Route104_WoodsBlocker_Text_0
# 39 "data/maps/Route104/scripts.pory"
	msgbox Route104_WoodsBlocker_Text_1
# 40 "data/maps/Route104/scripts.pory"
	release
	end


Route104_DeleteThisGuy::
# 45 "data/maps/Route104/scripts.pory"
	lock
# 46 "data/maps/Route104/scripts.pory"
	msgbox Route104_DeleteThisGuy_Text_0
# 47 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 4
# 48 "data/maps/Route104/scripts.pory"
	release
	end


Route104_RuiScript::
# 60 "data/maps/Route104/scripts.pory"
	applymovement 35, RuiApproach
# 61 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRui
# 63 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_0
# 64 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF, Route104_RuiScript_Text_1
# 66 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_2
# 67 "data/maps/Route104/scripts.pory"
	delay 30
# 69 "data/maps/Route104/scripts.pory"
	random 6
# 70 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/Route104/scripts.pory"
	case 0, Route104_RuiScript_3
# 73 "data/maps/Route104/scripts.pory"
	case 1, Route104_RuiScript_4
# 75 "data/maps/Route104/scripts.pory"
	case 2, Route104_RuiScript_5
# 77 "data/maps/Route104/scripts.pory"
	case 3, Route104_RuiScript_6
# 79 "data/maps/Route104/scripts.pory"
	case 4, Route104_RuiScript_7
# 81 "data/maps/Route104/scripts.pory"
	case 5, Route104_RuiScript_8
Route104_RuiScript_1:
# 85 "data/maps/Route104/scripts.pory"
	getpartysize
# 86 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Route104_RuiScript_10
# 90 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_10
Route104_RuiScript_9:
# 93 "data/maps/Route104/scripts.pory"
	msgbox Route104_WoodsBlocker_Text_0
# 94 "data/maps/Route104/scripts.pory"
	msgbox Route104_WoodsBlocker_Text_1
# 97 "data/maps/Route104/scripts.pory"
	setflag FLAG_RUI_MET
# 98 "data/maps/Route104/scripts.pory"
	setvar VAR_RUI_104_ENCOUNTER, 1
# 99 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 100 "data/maps/Route104/scripts.pory"
	release
	end

Route104_RuiScript_3:
# 71 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_3
# 72 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_FRIGIBAX
	goto Route104_RuiScript_1

Route104_RuiScript_4:
# 73 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_4
# 74 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_TINKATINK
	goto Route104_RuiScript_1

Route104_RuiScript_5:
# 75 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_5
# 76 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_YANMA
	goto Route104_RuiScript_1

Route104_RuiScript_6:
# 77 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_6
# 78 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_LAPRAS
	goto Route104_RuiScript_1

Route104_RuiScript_7:
# 79 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_7
# 80 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_SCRAGGY
	goto Route104_RuiScript_1

Route104_RuiScript_8:
# 81 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_8
# 82 "data/maps/Route104/scripts.pory"
	giveegg SPECIES_DARUMAKA
	goto Route104_RuiScript_1

Route104_RuiScript_10:
# 87 "data/maps/Route104/scripts.pory"
	msgbox Route104_RuiScript_Text_9
	goto Route104_RuiScript_9


# 107 "data/maps/Route104/scripts.pory"
RuiApproach:
# 108 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/Route104/scripts.pory"
PlayerFaceRui:
# 112 "data/maps/Route104/scripts.pory"
	face_up
	step_end

# 120 "data/maps/Route104/scripts.pory"

# 121 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 122 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 123 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 124 "data/maps/Route104/scripts.pory"

# 125 "data/maps/Route104/scripts.pory"

# 126 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 127 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 128 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 129 "data/maps/Route104/scripts.pory"
	.byte 0
# 130 "data/maps/Route104/scripts.pory"

# 131 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 132 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 133 "data/maps/Route104/scripts.pory"

# 134 "data/maps/Route104/scripts.pory"
	.2byte 0
# 135 "data/maps/Route104/scripts.pory"

# 136 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 137 "data/maps/Route104/scripts.pory"
	lockall
# 138 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 139 "data/maps/Route104/scripts.pory"
	end
# 140 "data/maps/Route104/scripts.pory"

# 141 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 142 "data/maps/Route104/scripts.pory"
	setflag(FLAG_RUI_MET)
# 143 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 144 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 145 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 146 "data/maps/Route104/scripts.pory"
	end
# 147 "data/maps/Route104/scripts.pory"

# 148 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 149 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 150 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 151 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 152 "data/maps/Route104/scripts.pory"
	return
# 153 "data/maps/Route104/scripts.pory"

# 154 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 155 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 156 "data/maps/Route104/scripts.pory"
	return
# 157 "data/maps/Route104/scripts.pory"

# 158 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 159 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 160 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 161 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 162 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 163 "data/maps/Route104/scripts.pory"
	return
# 164 "data/maps/Route104/scripts.pory"

# 165 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 166 "data/maps/Route104/scripts.pory"
	return
# 167 "data/maps/Route104/scripts.pory"

# 168 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 169 "data/maps/Route104/scripts.pory"
	lockall
# 170 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 171 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 172 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 174 "data/maps/Route104/scripts.pory"

# 175 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 176 "data/maps/Route104/scripts.pory"
	lockall
# 177 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 178 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 179 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 180 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 181 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route104/scripts.pory"
	delay 10
# 183 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 184 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 185 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 186 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 188 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route104/scripts.pory"
	delay 20
# 190 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 191 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 192 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 193 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 194 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 196 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 198 "data/maps/Route104/scripts.pory"

# 199 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 200 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 201 "data/maps/Route104/scripts.pory"
	checkplayergender
# 202 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 203 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 204 "data/maps/Route104/scripts.pory"
	return
# 205 "data/maps/Route104/scripts.pory"

# 206 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 207 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 208 "data/maps/Route104/scripts.pory"
	return
# 209 "data/maps/Route104/scripts.pory"

# 210 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 211 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 212 "data/maps/Route104/scripts.pory"
	return
# 213 "data/maps/Route104/scripts.pory"

# 214 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 215 "data/maps/Route104/scripts.pory"
	checkplayergender
# 216 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 217 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 218 "data/maps/Route104/scripts.pory"
	end
# 219 "data/maps/Route104/scripts.pory"

# 220 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 221 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 222 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 223 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 224 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 225 "data/maps/Route104/scripts.pory"
	closemessage
# 226 "data/maps/Route104/scripts.pory"
	delay 30
# 227 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 228 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 229 "data/maps/Route104/scripts.pory"
	waitfanfare
# 230 "data/maps/Route104/scripts.pory"
	closemessage
# 231 "data/maps/Route104/scripts.pory"
	delay 30
# 232 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 233 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 234 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 235 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 236 "data/maps/Route104/scripts.pory"
	closemessage
# 237 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 239 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 241 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 242 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 243 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 244 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 245 "data/maps/Route104/scripts.pory"
	releaseall
# 246 "data/maps/Route104/scripts.pory"
	end
# 247 "data/maps/Route104/scripts.pory"

# 248 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 249 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 250 "data/maps/Route104/scripts.pory"
	step_end
# 251 "data/maps/Route104/scripts.pory"

# 252 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 253 "data/maps/Route104/scripts.pory"
	walk_down
# 254 "data/maps/Route104/scripts.pory"
	face_right
# 255 "data/maps/Route104/scripts.pory"
	step_end
# 256 "data/maps/Route104/scripts.pory"

# 257 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 258 "data/maps/Route104/scripts.pory"
	delay_4
# 259 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 260 "data/maps/Route104/scripts.pory"
	step_end
# 261 "data/maps/Route104/scripts.pory"

# 262 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 263 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 264 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 265 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 266 "data/maps/Route104/scripts.pory"
	releaseall
# 267 "data/maps/Route104/scripts.pory"
	end
# 268 "data/maps/Route104/scripts.pory"

# 269 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 270 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 271 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 272 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 273 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 274 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 275 "data/maps/Route104/scripts.pory"
	end
# 276 "data/maps/Route104/scripts.pory"

# 277 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 278 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 279 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 280 "data/maps/Route104/scripts.pory"
	releaseall
# 281 "data/maps/Route104/scripts.pory"
	end
# 282 "data/maps/Route104/scripts.pory"

# 283 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 284 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 285 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 286 "data/maps/Route104/scripts.pory"
	return
# 287 "data/maps/Route104/scripts.pory"

# 288 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 289 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 290 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 291 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 292 "data/maps/Route104/scripts.pory"
	end
# 293 "data/maps/Route104/scripts.pory"

# 294 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 295 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 296 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 297 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 298 "data/maps/Route104/scripts.pory"
	end
# 299 "data/maps/Route104/scripts.pory"

# 300 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 301 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 302 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 303 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 304 "data/maps/Route104/scripts.pory"
	end
# 305 "data/maps/Route104/scripts.pory"

# 306 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 307 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 308 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 309 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 311 "data/maps/Route104/scripts.pory"
	closemessage
# 312 "data/maps/Route104/scripts.pory"
	delay 30
# 313 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 315 "data/maps/Route104/scripts.pory"
	waitfanfare
# 316 "data/maps/Route104/scripts.pory"
	closemessage
# 317 "data/maps/Route104/scripts.pory"
	delay 30
# 318 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 319 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 320 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 321 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 322 "data/maps/Route104/scripts.pory"
	closemessage
# 323 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 325 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 327 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 328 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 329 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 330 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 331 "data/maps/Route104/scripts.pory"
	releaseall
# 332 "data/maps/Route104/scripts.pory"
	end
# 333 "data/maps/Route104/scripts.pory"

# 334 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 335 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 336 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 337 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 338 "data/maps/Route104/scripts.pory"
	releaseall
# 339 "data/maps/Route104/scripts.pory"
	end
# 340 "data/maps/Route104/scripts.pory"

# 341 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 342 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 343 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 344 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 345 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 346 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 347 "data/maps/Route104/scripts.pory"
	end
# 348 "data/maps/Route104/scripts.pory"

# 349 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 350 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 351 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 352 "data/maps/Route104/scripts.pory"
	releaseall
# 353 "data/maps/Route104/scripts.pory"
	end
# 354 "data/maps/Route104/scripts.pory"

# 355 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 356 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 357 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 358 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 359 "data/maps/Route104/scripts.pory"
	end
# 360 "data/maps/Route104/scripts.pory"

# 361 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 362 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 363 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 364 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 365 "data/maps/Route104/scripts.pory"
	end
# 366 "data/maps/Route104/scripts.pory"

# 367 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 368 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 369 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 370 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 371 "data/maps/Route104/scripts.pory"
	end
# 372 "data/maps/Route104/scripts.pory"

# 373 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 374 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 375 "data/maps/Route104/scripts.pory"
	walk_down
# 376 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 377 "data/maps/Route104/scripts.pory"
	step_end
# 378 "data/maps/Route104/scripts.pory"

# 379 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 380 "data/maps/Route104/scripts.pory"
	walk_down
# 381 "data/maps/Route104/scripts.pory"
	step_end
# 382 "data/maps/Route104/scripts.pory"

# 383 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 384 "data/maps/Route104/scripts.pory"
	lock
# 385 "data/maps/Route104/scripts.pory"
	faceplayer
# 386 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 387 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 388 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 389 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 390 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 391 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 392 "data/maps/Route104/scripts.pory"
	release
# 393 "data/maps/Route104/scripts.pory"
	end
# 394 "data/maps/Route104/scripts.pory"

# 395 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 396 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 397 "data/maps/Route104/scripts.pory"
	release
# 398 "data/maps/Route104/scripts.pory"
	end
# 399 "data/maps/Route104/scripts.pory"

# 400 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 401 "data/maps/Route104/scripts.pory"
	lock
# 402 "data/maps/Route104/scripts.pory"
	faceplayer
# 403 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 404 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 405 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 406 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 407 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 408 "data/maps/Route104/scripts.pory"
	release
# 409 "data/maps/Route104/scripts.pory"
	end
# 410 "data/maps/Route104/scripts.pory"

# 411 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 412 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 413 "data/maps/Route104/scripts.pory"
	release
# 414 "data/maps/Route104/scripts.pory"
	end
# 415 "data/maps/Route104/scripts.pory"

# 416 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 417 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 418 "data/maps/Route104/scripts.pory"
	end
# 419 "data/maps/Route104/scripts.pory"

# 420 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 421 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 422 "data/maps/Route104/scripts.pory"
	end
# 423 "data/maps/Route104/scripts.pory"

# 424 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 425 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 426 "data/maps/Route104/scripts.pory"
	end
# 427 "data/maps/Route104/scripts.pory"

# 428 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 429 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 430 "data/maps/Route104/scripts.pory"
	end
# 431 "data/maps/Route104/scripts.pory"

# 432 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 433 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 434 "data/maps/Route104/scripts.pory"
	end
# 435 "data/maps/Route104/scripts.pory"

# 436 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 437 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 438 "data/maps/Route104/scripts.pory"
	end
# 439 "data/maps/Route104/scripts.pory"

# 440 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 441 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 442 "data/maps/Route104/scripts.pory"
	end
# 443 "data/maps/Route104/scripts.pory"

# 444 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 445 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 446 "data/maps/Route104/scripts.pory"
	end
# 447 "data/maps/Route104/scripts.pory"

# 448 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 449 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 450 "data/maps/Route104/scripts.pory"
	end
# 451 "data/maps/Route104/scripts.pory"

# 452 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 453 "data/maps/Route104/scripts.pory"
	lock
# 454 "data/maps/Route104/scripts.pory"
	faceplayer
# 455 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 456 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 457 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 458 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 459 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 460 "data/maps/Route104/scripts.pory"
	release
# 461 "data/maps/Route104/scripts.pory"
	end
# 462 "data/maps/Route104/scripts.pory"

# 463 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 464 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 465 "data/maps/Route104/scripts.pory"
	release
# 466 "data/maps/Route104/scripts.pory"
	end
# 467 "data/maps/Route104/scripts.pory"

# 468 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 469 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 470 "data/maps/Route104/scripts.pory"
	end
# 471 "data/maps/Route104/scripts.pory"

# 472 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 473 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 474 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 475 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 476 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 478 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 479 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 480 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 481 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 482 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 483 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 484 "data/maps/Route104/scripts.pory"
	end
# 485 "data/maps/Route104/scripts.pory"

# 486 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 487 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 488 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 489 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 491 "data/maps/Route104/scripts.pory"

# 492 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 493 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 494 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 495 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 496 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 497 "data/maps/Route104/scripts.pory"
	waitmessage
# 498 "data/maps/Route104/scripts.pory"
	delay 30
# 499 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 500 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 501 "data/maps/Route104/scripts.pory"
	waitfanfare
# 502 "data/maps/Route104/scripts.pory"
	closemessage
# 503 "data/maps/Route104/scripts.pory"
	delay 30
# 504 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 505 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 506 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 507 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 508 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 509 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 510 "data/maps/Route104/scripts.pory"

# 511 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 512 "data/maps/Route104/scripts.pory"
	delay 50
# 513 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 514 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 516 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 517 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 518 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 520 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 521 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 522 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 523 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 524 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 525 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 526 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 527 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 528 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 529 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 530 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 531 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 532 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 533 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 534 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 535 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 536 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 537 "data/maps/Route104/scripts.pory"
	end
# 538 "data/maps/Route104/scripts.pory"

# 539 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 540 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 541 "data/maps/Route104/scripts.pory"
	releaseall
# 542 "data/maps/Route104/scripts.pory"
	end
# 543 "data/maps/Route104/scripts.pory"

# 544 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 545 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 546 "data/maps/Route104/scripts.pory"
	releaseall
# 547 "data/maps/Route104/scripts.pory"
	end
# 548 "data/maps/Route104/scripts.pory"

# 549 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 550 "data/maps/Route104/scripts.pory"
	walk_down
# 551 "data/maps/Route104/scripts.pory"
	walk_down
# 552 "data/maps/Route104/scripts.pory"
	walk_down
# 553 "data/maps/Route104/scripts.pory"
	walk_down
# 554 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 555 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 556 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 557 "data/maps/Route104/scripts.pory"
	walk_fast_down
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
	walk_fast_down
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 572 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 573 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 574 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 575 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 583 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 584 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 585 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 586 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 587 "data/maps/Route104/scripts.pory"
	walk_fast_down
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
	walk_faster_down
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	walk_faster_down
# 639 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 640 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 646 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 647 "data/maps/Route104/scripts.pory"
	step_end
# 648 "data/maps/Route104/scripts.pory"

# 649 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 674 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 675 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 676 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 677 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 678 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 679 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 680 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 681 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_right
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
	walk_faster_right
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 722 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 723 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 724 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 725 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 726 "data/maps/Route104/scripts.pory"
	walk_right
# 727 "data/maps/Route104/scripts.pory"
	walk_right
# 728 "data/maps/Route104/scripts.pory"
	walk_down
# 729 "data/maps/Route104/scripts.pory"
	walk_down
# 730 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 731 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 732 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 733 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 734 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 735 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 736 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 737 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 738 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 739 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 740 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 741 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 742 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 743 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 744 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 745 "data/maps/Route104/scripts.pory"
	walk_down
# 746 "data/maps/Route104/scripts.pory"
	walk_down
# 747 "data/maps/Route104/scripts.pory"
	step_end
# 748 "data/maps/Route104/scripts.pory"

# 749 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 750 "data/maps/Route104/scripts.pory"
	walk_down
# 751 "data/maps/Route104/scripts.pory"
	walk_down
# 752 "data/maps/Route104/scripts.pory"
	walk_down
# 753 "data/maps/Route104/scripts.pory"
	walk_down
# 754 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 755 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 756 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 757 "data/maps/Route104/scripts.pory"
	walk_fast_down
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
	walk_fast_down
# 771 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 772 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 773 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 774 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 775 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 783 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 784 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 785 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 786 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 787 "data/maps/Route104/scripts.pory"
	walk_fast_down
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
	walk_faster_down
# 836 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 837 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 838 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 839 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 840 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 841 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 842 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 843 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 844 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 845 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 846 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 847 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 848 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 849 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 850 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 851 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 852 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 853 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 854 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 855 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 856 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 857 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 858 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 859 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 860 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 861 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 862 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 863 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 864 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 865 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 866 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 867 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 868 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 869 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 870 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 871 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 872 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 873 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 874 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 875 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 876 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 877 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 878 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 879 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 880 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 881 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 882 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 883 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 884 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 885 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 886 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 887 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 888 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 889 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 890 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 891 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 892 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 893 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 894 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 895 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 896 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 897 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 898 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 899 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 900 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 901 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 902 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 903 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 904 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 905 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 906 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 907 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 908 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 909 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 910 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 911 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 912 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 913 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 914 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 915 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 916 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 917 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 918 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 919 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 920 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 921 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 922 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 923 "data/maps/Route104/scripts.pory"
	walk_right
# 924 "data/maps/Route104/scripts.pory"
	walk_right
# 925 "data/maps/Route104/scripts.pory"
	walk_down
# 926 "data/maps/Route104/scripts.pory"
	walk_down
# 927 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 928 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 929 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 930 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 931 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 932 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 933 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 934 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 935 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 936 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 937 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 938 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 939 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 940 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 941 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 942 "data/maps/Route104/scripts.pory"
	walk_down
# 943 "data/maps/Route104/scripts.pory"
	walk_down
# 944 "data/maps/Route104/scripts.pory"
	step_end
# 945 "data/maps/Route104/scripts.pory"

# 946 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 947 "data/maps/Route104/scripts.pory"
	walk_left
# 948 "data/maps/Route104/scripts.pory"
	walk_down
# 949 "data/maps/Route104/scripts.pory"
	walk_down
# 950 "data/maps/Route104/scripts.pory"
	step_end
# 951 "data/maps/Route104/scripts.pory"

# 952 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 953 "data/maps/Route104/scripts.pory"
	walk_down
# 954 "data/maps/Route104/scripts.pory"
	step_end
# 955 "data/maps/Route104/scripts.pory"

# 956 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 957 "data/maps/Route104/scripts.pory"
	walk_down
# 958 "data/maps/Route104/scripts.pory"
	walk_left
# 959 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 960 "data/maps/Route104/scripts.pory"
	step_end
# 961 "data/maps/Route104/scripts.pory"

# 962 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 963 "data/maps/Route104/scripts.pory"
	walk_down
# 964 "data/maps/Route104/scripts.pory"
	walk_down
# 965 "data/maps/Route104/scripts.pory"
	step_end
# 966 "data/maps/Route104/scripts.pory"

# 967 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 968 "data/maps/Route104/scripts.pory"
	walk_down
# 969 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 970 "data/maps/Route104/scripts.pory"
	step_end
# 971 "data/maps/Route104/scripts.pory"

# 972 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 973 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 974 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 975 "data/maps/Route104/scripts.pory"
	end
# 976 "data/maps/Route104/scripts.pory"

# 977 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 978 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 979 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 980 "data/maps/Route104/scripts.pory"
	end
# 981 "data/maps/Route104/scripts.pory"

# 982 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 983 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 984 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 985 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 986 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 987 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 988 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 989 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 990 "data/maps/Route104/scripts.pory"
	release
# 991 "data/maps/Route104/scripts.pory"
	end
# 992 "data/maps/Route104/scripts.pory"

# 993 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 994 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 995 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 996 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 997 "data/maps/Route104/scripts.pory"
	release
# 998 "data/maps/Route104/scripts.pory"
	end
# 999 "data/maps/Route104/scripts.pory"

# 1000 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 1001 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 1002 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1003 "data/maps/Route104/scripts.pory"
	release
# 1004 "data/maps/Route104/scripts.pory"
	end
# 1005 "data/maps/Route104/scripts.pory"

# 1006 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 1007 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 1008 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1009 "data/maps/Route104/scripts.pory"
	release
# 1010 "data/maps/Route104/scripts.pory"
	end
# 1011 "data/maps/Route104/scripts.pory"

# 1012 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 1013 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 1014 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1015 "data/maps/Route104/scripts.pory"
	release
# 1016 "data/maps/Route104/scripts.pory"
	end
# 1017 "data/maps/Route104/scripts.pory"

# 1018 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 1019 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 1020 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 1021 "data/maps/Route104/scripts.pory"
	end
# 1022 "data/maps/Route104/scripts.pory"

# 1023 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 1024 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 1025 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1026 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 1027 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 1028 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1029 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 1030 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1031 "data/maps/Route104/scripts.pory"
	release
# 1032 "data/maps/Route104/scripts.pory"
	end
# 1033 "data/maps/Route104/scripts.pory"

# 1034 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 1035 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1036 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1037 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1038 "data/maps/Route104/scripts.pory"
	release
# 1039 "data/maps/Route104/scripts.pory"
	end
# 1040 "data/maps/Route104/scripts.pory"

# 1041 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1042 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1043 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1044 "data/maps/Route104/scripts.pory"
	release
# 1045 "data/maps/Route104/scripts.pory"
	end
# 1046 "data/maps/Route104/scripts.pory"

# 1047 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1048 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1049 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1050 "data/maps/Route104/scripts.pory"
	release
# 1051 "data/maps/Route104/scripts.pory"
	end
# 1052 "data/maps/Route104/scripts.pory"

# 1053 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1054 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1055 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1056 "data/maps/Route104/scripts.pory"
	release
# 1057 "data/maps/Route104/scripts.pory"
	end
# 1058 "data/maps/Route104/scripts.pory"

# 1059 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1060 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1061 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1062 "data/maps/Route104/scripts.pory"
	end
# 1063 "data/maps/Route104/scripts.pory"

# 1064 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1065 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1066 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1067 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1068 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1069 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1070 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1071 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1072 "data/maps/Route104/scripts.pory"
	release
# 1073 "data/maps/Route104/scripts.pory"
	end
# 1074 "data/maps/Route104/scripts.pory"

# 1075 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1076 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1077 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1078 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1079 "data/maps/Route104/scripts.pory"
	release
# 1080 "data/maps/Route104/scripts.pory"
	end
# 1081 "data/maps/Route104/scripts.pory"

# 1082 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1083 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1084 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1085 "data/maps/Route104/scripts.pory"
	release
# 1086 "data/maps/Route104/scripts.pory"
	end
# 1087 "data/maps/Route104/scripts.pory"

# 1088 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1089 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1090 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1091 "data/maps/Route104/scripts.pory"
	release
# 1092 "data/maps/Route104/scripts.pory"
	end
# 1093 "data/maps/Route104/scripts.pory"

# 1094 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1095 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1096 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1097 "data/maps/Route104/scripts.pory"
	release
# 1098 "data/maps/Route104/scripts.pory"
	end
# 1099 "data/maps/Route104/scripts.pory"

# 1100 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1101 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1102 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1103 "data/maps/Route104/scripts.pory"
	end
# 1104 "data/maps/Route104/scripts.pory"

# 1105 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1106 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1107 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1108 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1109 "data/maps/Route104/scripts.pory"
	release
# 1110 "data/maps/Route104/scripts.pory"
	end
# 1111 "data/maps/Route104/scripts.pory"

# 1112 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1113 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1114 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1115 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1116 "data/maps/Route104/scripts.pory"
	release
# 1117 "data/maps/Route104/scripts.pory"
	end
# 1118 "data/maps/Route104/scripts.pory"

# 1119 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1120 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1121 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1122 "data/maps/Route104/scripts.pory"
	end
# 1123 "data/maps/Route104/scripts.pory"

# 1124 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1125 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1126 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1127 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1128 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1129 "data/maps/Route104/scripts.pory"

# 1130 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1131 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1132 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1133 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1134 "data/maps/Route104/scripts.pory"

# 1135 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1136 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1137 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1138 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1139 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1140 "data/maps/Route104/scripts.pory"

# 1141 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1142 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1143 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1144 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1145 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1146 "data/maps/Route104/scripts.pory"

# 1147 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1148 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1149 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1150 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1151 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1152 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1153 "data/maps/Route104/scripts.pory"

# 1154 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1155 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1156 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1157 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1158 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1159 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1160 "data/maps/Route104/scripts.pory"

# 1161 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1162 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1163 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1164 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1165 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1166 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1167 "data/maps/Route104/scripts.pory"

# 1168 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1169 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1170 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1171 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1172 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1173 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1174 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1175 "data/maps/Route104/scripts.pory"

# 1176 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1177 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1178 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1179 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1180 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1181 "data/maps/Route104/scripts.pory"

# 1182 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1183 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1184 "data/maps/Route104/scripts.pory"

# 1185 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1186 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1187 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1188 "data/maps/Route104/scripts.pory"

# 1189 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1190 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1191 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1192 "data/maps/Route104/scripts.pory"

# 1193 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1194 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1195 "data/maps/Route104/scripts.pory"

# 1196 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1197 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1198 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1199 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1200 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1201 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1202 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1203 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1204 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1205 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1206 "data/maps/Route104/scripts.pory"

# 1207 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1208 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1209 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1210 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1211 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1212 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1213 "data/maps/Route104/scripts.pory"

# 1214 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1215 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1216 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1217 "data/maps/Route104/scripts.pory"

# 1218 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1219 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1220 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1221 "data/maps/Route104/scripts.pory"

# 1222 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1223 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1224 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1225 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1226 "data/maps/Route104/scripts.pory"

# 1227 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1228 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1229 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1230 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1231 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1232 "data/maps/Route104/scripts.pory"

# 1233 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1234 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1235 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1236 "data/maps/Route104/scripts.pory"

# 1237 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1238 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1239 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1240 "data/maps/Route104/scripts.pory"

# 1241 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1242 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1243 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1244 "data/maps/Route104/scripts.pory"

# 1245 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1246 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1247 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1248 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1249 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1250 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1251 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1252 "data/maps/Route104/scripts.pory"

# 1253 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1254 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1255 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1256 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1257 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1258 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1259 "data/maps/Route104/scripts.pory"

# 1260 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1261 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1262 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1263 "data/maps/Route104/scripts.pory"

# 1264 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1265 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1266 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1267 "data/maps/Route104/scripts.pory"

# 1268 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1269 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1270 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1271 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1272 "data/maps/Route104/scripts.pory"

# 1273 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1274 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1275 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1276 "data/maps/Route104/scripts.pory"

# 1277 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1278 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1279 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1280 "data/maps/Route104/scripts.pory"

# 1281 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1282 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1283 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1284 "data/maps/Route104/scripts.pory"

# 1285 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1286 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1287 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1288 "data/maps/Route104/scripts.pory"

# 1289 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1290 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1291 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1292 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1293 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1294 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1295 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

Route104_WoodsBlocker_Text_0:
# 28 "data/maps/Route104/scripts.pory"
	.string "Woah, you can't go this way! The forest\n"
	.string "is swarming with Dustox! It's, like,\l"
	.string "SUPER dangerous!$"

Route104_WoodsBlocker_Text_1:
# 29 "data/maps/Route104/scripts.pory"
	.string "You should catch the next ship to\n"
	.string "Dewford instead!$"

Route104_DeleteThisGuy_Text_0:
# 46 "data/maps/Route104/scripts.pory"
	.string "im a testing guy$"

Route104_RuiScript_Text_0:
# 63 "data/maps/Route104/scripts.pory"
	.string "Greetings, i'm Colin! I may be a 'Gacha'\n"
	.string "pro, but i'm not gonna be 'pulling' any\l"
	.string "punches today! Have at you!$"

Route104_RuiScript_Text_1:
# 65 "data/maps/Route104/scripts.pory"
	.string "Zenless Zone Zero.$"

Route104_RuiScript_Text_2:
# 66 "data/maps/Route104/scripts.pory"
	.string "check out my egg from vietnam$"

Route104_RuiScript_Text_3:
# 71 "data/maps/Route104/scripts.pory"
	.string "frigibax$"

Route104_RuiScript_Text_4:
# 73 "data/maps/Route104/scripts.pory"
	.string "tinkaton$"

Route104_RuiScript_Text_5:
# 75 "data/maps/Route104/scripts.pory"
	.string "yanma$"

Route104_RuiScript_Text_6:
# 77 "data/maps/Route104/scripts.pory"
	.string "lapras$"

Route104_RuiScript_Text_7:
# 79 "data/maps/Route104/scripts.pory"
	.string "scraggy$"

Route104_RuiScript_Text_8:
# 81 "data/maps/Route104/scripts.pory"
	.string "darumaka$"

Route104_RuiScript_Text_9:
# 87 "data/maps/Route104/scripts.pory"
	.string "you got too many$"

Route104_RuiScript_Text_10:
# 90 "data/maps/Route104/scripts.pory"
	.string "take this egg egg$"
