# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/SlateportCity/scripts.pory"
	return
# 42 "data/maps/SlateportCity/scripts.pory"

# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/SlateportCity/scripts.pory"
	return
# 59 "data/maps/SlateportCity/scripts.pory"

# 60 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/SlateportCity/scripts.pory"
	return
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 76 "data/maps/SlateportCity/scripts.pory"

# 77 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 78 "data/maps/SlateportCity/scripts.pory"
	lockall
# 79 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 81 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 82 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 88 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 89 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 94 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 95 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 97 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 98 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 99 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 103 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 109 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 110 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 111 "data/maps/SlateportCity/scripts.pory"
	end
# 112 "data/maps/SlateportCity/scripts.pory"

# 113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 115 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 116 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/SlateportCity/scripts.pory"
	step_end
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	step_end
# 128 "data/maps/SlateportCity/scripts.pory"

# 129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 144 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 146 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 147 "data/maps/SlateportCity/scripts.pory"
	release
# 148 "data/maps/SlateportCity/scripts.pory"
	end
# 149 "data/maps/SlateportCity/scripts.pory"

# 150 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SUN_STONE
# 159 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICE_STONE
# 160 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 161 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 162 "data/maps/SlateportCity/scripts.pory"

# 163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 164 "data/maps/SlateportCity/scripts.pory"
	lock
# 165 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 166 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 167 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 168 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 169 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 170 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 171 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 172 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 173 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 175 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 178 "data/maps/SlateportCity/scripts.pory"
	release
# 179 "data/maps/SlateportCity/scripts.pory"
	end
# 180 "data/maps/SlateportCity/scripts.pory"

# 181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 182 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 183 "data/maps/SlateportCity/scripts.pory"
	release
# 184 "data/maps/SlateportCity/scripts.pory"
	end
# 185 "data/maps/SlateportCity/scripts.pory"

# 186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 187 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 188 "data/maps/SlateportCity/scripts.pory"
	release
# 189 "data/maps/SlateportCity/scripts.pory"
	end
# 190 "data/maps/SlateportCity/scripts.pory"

# 191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 192 "data/maps/SlateportCity/scripts.pory"
	lock
# 193 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 194 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 195 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 196 "data/maps/SlateportCity/scripts.pory"
	release
# 197 "data/maps/SlateportCity/scripts.pory"
	end
# 198 "data/maps/SlateportCity/scripts.pory"

# 199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 200 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 201 "data/maps/SlateportCity/scripts.pory"
	release
# 202 "data/maps/SlateportCity/scripts.pory"
	end
# 203 "data/maps/SlateportCity/scripts.pory"

# 204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 205 "data/maps/SlateportCity/scripts.pory"
	lock
# 206 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 207 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 208 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 209 "data/maps/SlateportCity/scripts.pory"
	release
# 210 "data/maps/SlateportCity/scripts.pory"
	end
# 211 "data/maps/SlateportCity/scripts.pory"

# 212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 213 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 214 "data/maps/SlateportCity/scripts.pory"
	release
# 215 "data/maps/SlateportCity/scripts.pory"
	end
# 216 "data/maps/SlateportCity/scripts.pory"

# 217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 218 "data/maps/SlateportCity/scripts.pory"
	lock
# 219 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 220 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 221 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 227 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 228 "data/maps/SlateportCity/scripts.pory"
	release
# 229 "data/maps/SlateportCity/scripts.pory"
	end
# 230 "data/maps/SlateportCity/scripts.pory"

# 231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 232 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 233 "data/maps/SlateportCity/scripts.pory"
	release
# 234 "data/maps/SlateportCity/scripts.pory"
	end
# 235 "data/maps/SlateportCity/scripts.pory"

# 236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 237 "data/maps/SlateportCity/scripts.pory"
	lock
# 238 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 239 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 240 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 241 "data/maps/SlateportCity/scripts.pory"
	release
# 242 "data/maps/SlateportCity/scripts.pory"
	end
# 243 "data/maps/SlateportCity/scripts.pory"

# 244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 245 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity/scripts.pory"
	release
# 247 "data/maps/SlateportCity/scripts.pory"
	end
# 248 "data/maps/SlateportCity/scripts.pory"

# 249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 250 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 251 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 252 "data/maps/SlateportCity/scripts.pory"
	end
# 253 "data/maps/SlateportCity/scripts.pory"

# 254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 255 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 259 "data/maps/SlateportCity/scripts.pory"
	lock
# 260 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 261 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 262 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 263 "data/maps/SlateportCity/scripts.pory"
	release
# 264 "data/maps/SlateportCity/scripts.pory"
	end
# 265 "data/maps/SlateportCity/scripts.pory"

# 266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 267 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity/scripts.pory"
	release
# 269 "data/maps/SlateportCity/scripts.pory"
	end
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 272 "data/maps/SlateportCity/scripts.pory"
	lock
# 273 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 274 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 275 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 276 "data/maps/SlateportCity/scripts.pory"
	release
# 277 "data/maps/SlateportCity/scripts.pory"
	end
# 278 "data/maps/SlateportCity/scripts.pory"

# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 280 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 281 "data/maps/SlateportCity/scripts.pory"
	release
# 282 "data/maps/SlateportCity/scripts.pory"
	end
# 283 "data/maps/SlateportCity/scripts.pory"

# 284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 285 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 289 "data/maps/SlateportCity/scripts.pory"
	lockall
# 290 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 291 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 292 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 293 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 294 "data/maps/SlateportCity/scripts.pory"
	end
# 295 "data/maps/SlateportCity/scripts.pory"

# 296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 297 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 298 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 299 "data/maps/SlateportCity/scripts.pory"
	end
# 300 "data/maps/SlateportCity/scripts.pory"

# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 302 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 303 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 304 "data/maps/SlateportCity/scripts.pory"
	end
# 305 "data/maps/SlateportCity/scripts.pory"

# 306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 312 "data/maps/SlateportCity/scripts.pory"
	end
# 313 "data/maps/SlateportCity/scripts.pory"

# 314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 320 "data/maps/SlateportCity/scripts.pory"
	end
# 321 "data/maps/SlateportCity/scripts.pory"

# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 323 "data/maps/SlateportCity/scripts.pory"
	lockall
# 324 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 325 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 326 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 327 "data/maps/SlateportCity/scripts.pory"
	end
# 328 "data/maps/SlateportCity/scripts.pory"

# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 330 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 331 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 332 "data/maps/SlateportCity/scripts.pory"
	end
# 333 "data/maps/SlateportCity/scripts.pory"

# 334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 335 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 339 "data/maps/SlateportCity/scripts.pory"
	lock
# 340 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 341 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 342 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 343 "data/maps/SlateportCity/scripts.pory"
	release
# 344 "data/maps/SlateportCity/scripts.pory"
	end
# 345 "data/maps/SlateportCity/scripts.pory"

# 346 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 348 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 349 "data/maps/SlateportCity/scripts.pory"
	release
# 350 "data/maps/SlateportCity/scripts.pory"
	end
# 351 "data/maps/SlateportCity/scripts.pory"

# 352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 353 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 358 "data/maps/SlateportCity/scripts.pory"
	end
# 359 "data/maps/SlateportCity/scripts.pory"

# 360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 361 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 362 "data/maps/SlateportCity/scripts.pory"
	end
# 363 "data/maps/SlateportCity/scripts.pory"

# 364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 365 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 366 "data/maps/SlateportCity/scripts.pory"
	end
# 367 "data/maps/SlateportCity/scripts.pory"

# 368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 370 "data/maps/SlateportCity/scripts.pory"
	end
# 371 "data/maps/SlateportCity/scripts.pory"

# 372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 373 "data/maps/SlateportCity/scripts.pory"
	lock
# 374 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 376 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 377 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 378 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/SlateportCity/scripts.pory"
	release
# 380 "data/maps/SlateportCity/scripts.pory"
	end
# 381 "data/maps/SlateportCity/scripts.pory"

# 382 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 383 "data/maps/SlateportCity/scripts.pory"
	lock
# 384 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 385 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 386 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 387 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 388 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/SlateportCity/scripts.pory"
	release
# 390 "data/maps/SlateportCity/scripts.pory"
	end
# 391 "data/maps/SlateportCity/scripts.pory"

# 392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 393 "data/maps/SlateportCity/scripts.pory"
	lock
# 394 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 395 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 396 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 397 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 398 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 399 "data/maps/SlateportCity/scripts.pory"
	release
# 400 "data/maps/SlateportCity/scripts.pory"
	end
# 401 "data/maps/SlateportCity/scripts.pory"

# 402 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 403 "data/maps/SlateportCity/scripts.pory"
	lock
# 404 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 405 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 406 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 407 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 408 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 409 "data/maps/SlateportCity/scripts.pory"
	release
# 410 "data/maps/SlateportCity/scripts.pory"
	end
# 411 "data/maps/SlateportCity/scripts.pory"

# 412 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 413 "data/maps/SlateportCity/scripts.pory"
	lock
# 414 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 415 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 416 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 417 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 418 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/SlateportCity/scripts.pory"
	release
# 420 "data/maps/SlateportCity/scripts.pory"
	end
# 421 "data/maps/SlateportCity/scripts.pory"

# 422 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 423 "data/maps/SlateportCity/scripts.pory"
	lock
# 424 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 425 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 426 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 427 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 428 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/SlateportCity/scripts.pory"
	release
# 430 "data/maps/SlateportCity/scripts.pory"
	end
# 431 "data/maps/SlateportCity/scripts.pory"

# 432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 433 "data/maps/SlateportCity/scripts.pory"
	lock
# 434 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 435 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 436 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 437 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 438 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/SlateportCity/scripts.pory"
	release
# 440 "data/maps/SlateportCity/scripts.pory"
	end
# 441 "data/maps/SlateportCity/scripts.pory"

# 442 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 443 "data/maps/SlateportCity/scripts.pory"
	lock
# 444 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 445 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 446 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 447 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 448 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 449 "data/maps/SlateportCity/scripts.pory"
	release
# 450 "data/maps/SlateportCity/scripts.pory"
	end
# 451 "data/maps/SlateportCity/scripts.pory"

# 452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 453 "data/maps/SlateportCity/scripts.pory"
	lock
# 454 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 455 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 456 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 457 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 461 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 465 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 466 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 467 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 469 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 470 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 471 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 472 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 473 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 475 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SlateportCity/scripts.pory"
	release
# 483 "data/maps/SlateportCity/scripts.pory"
	end
# 484 "data/maps/SlateportCity/scripts.pory"

# 485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 486 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 487 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 488 "data/maps/SlateportCity/scripts.pory"
	step_end
# 489 "data/maps/SlateportCity/scripts.pory"

# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 491 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 492 "data/maps/SlateportCity/scripts.pory"
	end
# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 495 "data/maps/SlateportCity/scripts.pory"
	lock
# 496 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 499 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 500 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/SlateportCity/scripts.pory"
	release
# 502 "data/maps/SlateportCity/scripts.pory"
	end
# 503 "data/maps/SlateportCity/scripts.pory"

# 504 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 505 "data/maps/SlateportCity/scripts.pory"
	lock
# 506 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 507 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 508 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 509 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 510 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 511 "data/maps/SlateportCity/scripts.pory"
	release
# 512 "data/maps/SlateportCity/scripts.pory"
	end
# 513 "data/maps/SlateportCity/scripts.pory"

# 514 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 516 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 517 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 518 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 519 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 520 "data/maps/SlateportCity/scripts.pory"

# 521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 522 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 523 "data/maps/SlateportCity/scripts.pory"
	release
# 524 "data/maps/SlateportCity/scripts.pory"
	end
# 525 "data/maps/SlateportCity/scripts.pory"

# 526 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 527 "data/maps/SlateportCity/scripts.pory"
	lock
# 528 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 529 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 530 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 531 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 532 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 533 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 534 "data/maps/SlateportCity/scripts.pory"
	release
# 535 "data/maps/SlateportCity/scripts.pory"
	end
# 536 "data/maps/SlateportCity/scripts.pory"

# 537 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 540 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 541 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 542 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 549 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 553 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 554 "data/maps/SlateportCity/scripts.pory"

# 555 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 556 "data/maps/SlateportCity/scripts.pory"
	lock
# 557 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 558 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 559 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 560 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 561 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 562 "data/maps/SlateportCity/scripts.pory"
	release
# 563 "data/maps/SlateportCity/scripts.pory"
	end
# 564 "data/maps/SlateportCity/scripts.pory"

# 565 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 566 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 568 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 569 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 570 "data/maps/SlateportCity/scripts.pory"

# 571 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 573 "data/maps/SlateportCity/scripts.pory"
	lockall
# 574 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 575 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 576 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 577 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 578 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 579 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 580 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 581 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 583 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 584 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 585 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 586 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 587 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 589 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 590 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 591 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 592 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 594 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 595 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 596 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 597 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 599 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 600 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 601 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 603 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 605 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 607 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 609 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 611 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 613 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 614 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 617 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 619 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 620 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 621 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 622 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 623 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 624 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 625 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 626 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 627 "data/maps/SlateportCity/scripts.pory"
	end
# 628 "data/maps/SlateportCity/scripts.pory"

# 629 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 630 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 631 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 632 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 633 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 634 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 635 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 636 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 637 "data/maps/SlateportCity/scripts.pory"
	step_end
# 638 "data/maps/SlateportCity/scripts.pory"

# 639 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 640 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 641 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 642 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 643 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 644 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 645 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 646 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 647 "data/maps/SlateportCity/scripts.pory"
	step_end
# 648 "data/maps/SlateportCity/scripts.pory"

# 649 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 650 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 653 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 662 "data/maps/SlateportCity/scripts.pory"
	step_end
# 663 "data/maps/SlateportCity/scripts.pory"

# 664 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 666 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 668 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 669 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	step_end
# 679 "data/maps/SlateportCity/scripts.pory"

# 680 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 683 "data/maps/SlateportCity/scripts.pory"
	step_end
# 684 "data/maps/SlateportCity/scripts.pory"

# 685 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 689 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 690 "data/maps/SlateportCity/scripts.pory"
	step_end
# 691 "data/maps/SlateportCity/scripts.pory"

# 692 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 693 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 694 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 695 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 696 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 697 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 698 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 699 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 700 "data/maps/SlateportCity/scripts.pory"
	step_end
# 701 "data/maps/SlateportCity/scripts.pory"

# 702 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 704 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 705 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 708 "data/maps/SlateportCity/scripts.pory"
	step_end
# 709 "data/maps/SlateportCity/scripts.pory"

# 710 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 711 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 714 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 718 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 719 "data/maps/SlateportCity/scripts.pory"
	step_end
# 720 "data/maps/SlateportCity/scripts.pory"

# 721 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 722 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 723 "data/maps/SlateportCity/scripts.pory"
	end
# 724 "data/maps/SlateportCity/scripts.pory"

# 725 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 726 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 730 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 731 "data/maps/SlateportCity/scripts.pory"
	end
# 732 "data/maps/SlateportCity/scripts.pory"

# 733 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 734 "data/maps/SlateportCity/scripts.pory"
	lock
# 735 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 736 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 737 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 738 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 739 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 740 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 741 "data/maps/SlateportCity/scripts.pory"
	release
# 742 "data/maps/SlateportCity/scripts.pory"
	end
# 743 "data/maps/SlateportCity/scripts.pory"

# 744 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 745 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 746 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 747 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 748 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 749 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 750 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 751 "data/maps/SlateportCity/scripts.pory"
	end
# 752 "data/maps/SlateportCity/scripts.pory"

# 753 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 754 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 755 "data/maps/SlateportCity/scripts.pory"
	release
# 756 "data/maps/SlateportCity/scripts.pory"
	end
# 757 "data/maps/SlateportCity/scripts.pory"

# 758 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 759 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 760 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 761 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 762 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 763 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 764 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 765 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 766 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 767 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 768 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 769 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 770 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 771 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 772 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 773 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 774 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 775 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 776 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 777 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 778 "data/maps/SlateportCity/scripts.pory"
	end
# 779 "data/maps/SlateportCity/scripts.pory"

# 780 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 781 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 782 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 783 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 784 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 785 "data/maps/SlateportCity/scripts.pory"
	end
# 786 "data/maps/SlateportCity/scripts.pory"

# 787 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 788 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 789 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 790 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 791 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 792 "data/maps/SlateportCity/scripts.pory"
	end
# 793 "data/maps/SlateportCity/scripts.pory"

# 794 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 795 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 797 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 798 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 799 "data/maps/SlateportCity/scripts.pory"
	end
# 800 "data/maps/SlateportCity/scripts.pory"

# 801 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 802 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 804 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 805 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 806 "data/maps/SlateportCity/scripts.pory"
	end
# 807 "data/maps/SlateportCity/scripts.pory"

# 808 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 809 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 810 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 811 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 812 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 813 "data/maps/SlateportCity/scripts.pory"
	end
# 814 "data/maps/SlateportCity/scripts.pory"

# 815 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 816 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 817 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 818 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 819 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 820 "data/maps/SlateportCity/scripts.pory"
	end
# 821 "data/maps/SlateportCity/scripts.pory"

# 822 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 823 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 825 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 826 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 827 "data/maps/SlateportCity/scripts.pory"
	end
# 828 "data/maps/SlateportCity/scripts.pory"

# 829 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 830 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 831 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 832 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 833 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 834 "data/maps/SlateportCity/scripts.pory"
	end
# 835 "data/maps/SlateportCity/scripts.pory"

# 836 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 837 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 838 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 839 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 840 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 841 "data/maps/SlateportCity/scripts.pory"
	end
# 842 "data/maps/SlateportCity/scripts.pory"

# 843 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 844 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 845 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 846 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 847 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 848 "data/maps/SlateportCity/scripts.pory"
	end
# 849 "data/maps/SlateportCity/scripts.pory"

# 850 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 851 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 852 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 853 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 854 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 855 "data/maps/SlateportCity/scripts.pory"
	end
# 856 "data/maps/SlateportCity/scripts.pory"

# 857 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 858 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 859 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 860 "data/maps/SlateportCity/scripts.pory"
	release
# 861 "data/maps/SlateportCity/scripts.pory"
	end
# 862 "data/maps/SlateportCity/scripts.pory"

# 863 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 864 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 865 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 866 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 867 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 868 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 869 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 870 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 871 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 872 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 873 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 874 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 875 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 876 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 877 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 878 "data/maps/SlateportCity/scripts.pory"
	release
# 879 "data/maps/SlateportCity/scripts.pory"
	end
# 880 "data/maps/SlateportCity/scripts.pory"

# 881 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 882 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 883 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 884 "data/maps/SlateportCity/scripts.pory"
	release
# 885 "data/maps/SlateportCity/scripts.pory"
	end
# 886 "data/maps/SlateportCity/scripts.pory"

# 887 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 888 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 889 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 890 "data/maps/SlateportCity/scripts.pory"
	end
# 891 "data/maps/SlateportCity/scripts.pory"

# 892 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 893 "data/maps/SlateportCity/scripts.pory"
	lockall
# 894 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 895 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 897 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 898 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 899 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 900 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 901 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 902 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 903 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 904 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 905 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 906 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 907 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 908 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 909 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 910 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 911 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 912 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 913 "data/maps/SlateportCity/scripts.pory"
	end
# 914 "data/maps/SlateportCity/scripts.pory"

# 915 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 916 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 917 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 918 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 919 "data/maps/SlateportCity/scripts.pory"
	step_end
# 920 "data/maps/SlateportCity/scripts.pory"

# 921 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 922 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 923 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 924 "data/maps/SlateportCity/scripts.pory"
	step_end
# 925 "data/maps/SlateportCity/scripts.pory"

# 926 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 927 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 928 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 929 "data/maps/SlateportCity/scripts.pory"
	step_end
# 930 "data/maps/SlateportCity/scripts.pory"

# 931 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 932 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 933 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 934 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 935 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 937 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 939 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 940 "data/maps/SlateportCity/scripts.pory"
	step_end
# 941 "data/maps/SlateportCity/scripts.pory"

# 942 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 943 "data/maps/SlateportCity/scripts.pory"
	lockall
# 944 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 945 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 946 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 947 "data/maps/SlateportCity/scripts.pory"
	end
# 948 "data/maps/SlateportCity/scripts.pory"

# 949 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 951 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 956 "data/maps/SlateportCity/scripts.pory"

# 957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 958 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 960 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 961 "data/maps/SlateportCity/scripts.pory"

# 962 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 964 "data/maps/SlateportCity/scripts.pory"

# 965 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 968 "data/maps/SlateportCity/scripts.pory"

# 969 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 973 "data/maps/SlateportCity/scripts.pory"

# 974 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 975 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 977 "data/maps/SlateportCity/scripts.pory"

# 978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 980 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 983 "data/maps/SlateportCity/scripts.pory"

# 984 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 990 "data/maps/SlateportCity/scripts.pory"

# 991 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1002 "data/maps/SlateportCity/scripts.pory"

# 1003 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1009 "data/maps/SlateportCity/scripts.pory"

# 1010 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1042 "data/maps/SlateportCity/scripts.pory"

# 1043 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1047 "data/maps/SlateportCity/scripts.pory"

# 1048 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1052 "data/maps/SlateportCity/scripts.pory"

# 1053 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1065 "data/maps/SlateportCity/scripts.pory"

# 1066 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1070 "data/maps/SlateportCity/scripts.pory"

# 1071 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1078 "data/maps/SlateportCity/scripts.pory"

# 1079 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1082 "data/maps/SlateportCity/scripts.pory"

# 1083 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1095 "data/maps/SlateportCity/scripts.pory"

# 1096 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1101 "data/maps/SlateportCity/scripts.pory"

# 1102 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1106 "data/maps/SlateportCity/scripts.pory"

# 1107 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1121 "data/maps/SlateportCity/scripts.pory"

# 1122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1127 "data/maps/SlateportCity/scripts.pory"

# 1128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1135 "data/maps/SlateportCity/scripts.pory"

# 1136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1141 "data/maps/SlateportCity/scripts.pory"

# 1142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1147 "data/maps/SlateportCity/scripts.pory"

# 1148 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1166 "data/maps/SlateportCity/scripts.pory"

# 1167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1190 "data/maps/SlateportCity/scripts.pory"

# 1191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1211 "data/maps/SlateportCity/scripts.pory"

# 1212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1217 "data/maps/SlateportCity/scripts.pory"

# 1218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1222 "data/maps/SlateportCity/scripts.pory"

# 1223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1235 "data/maps/SlateportCity/scripts.pory"

# 1236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1241 "data/maps/SlateportCity/scripts.pory"

# 1242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1247 "data/maps/SlateportCity/scripts.pory"

# 1248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1251 "data/maps/SlateportCity/scripts.pory"

# 1252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1256 "data/maps/SlateportCity/scripts.pory"

# 1257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1265 "data/maps/SlateportCity/scripts.pory"

# 1266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1272 "data/maps/SlateportCity/scripts.pory"

# 1273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1277 "data/maps/SlateportCity/scripts.pory"

# 1278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1296 "data/maps/SlateportCity/scripts.pory"

# 1297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1307 "data/maps/SlateportCity/scripts.pory"

# 1308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1315 "data/maps/SlateportCity/scripts.pory"

# 1316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1319 "data/maps/SlateportCity/scripts.pory"

# 1320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1323 "data/maps/SlateportCity/scripts.pory"

# 1324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1339 "data/maps/SlateportCity/scripts.pory"

# 1340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1352 "data/maps/SlateportCity/scripts.pory"

# 1353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1359 "data/maps/SlateportCity/scripts.pory"

# 1360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1363 "data/maps/SlateportCity/scripts.pory"

# 1364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1371 "data/maps/SlateportCity/scripts.pory"

# 1372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
