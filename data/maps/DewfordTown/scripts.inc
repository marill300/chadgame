DewfordMonkScript::
# 3 "data/maps/DewfordTown/scripts.pory"
	lock
# 4 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_MONK_MET
# 5 "data/maps/DewfordTown/scripts.pory"
	addobject 6
# 6 "data/maps/DewfordTown/scripts.pory"
	setobjectxy 6, 17, 10
# 8 "data/maps/DewfordTown/scripts.pory"
	applymovement 6, MonkApproach
# 9 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 10 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceMonk
# 11 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_0
# 12 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF, DewfordMonkScript_Text_1
# 13 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_2
# 14 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 16 "data/maps/DewfordTown/scripts.pory"
	random 6
# 17 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordMonkScript_3
# 20 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordMonkScript_4
# 22 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordMonkScript_5
# 24 "data/maps/DewfordTown/scripts.pory"
	case 3, DewfordMonkScript_6
# 26 "data/maps/DewfordTown/scripts.pory"
	case 4, DewfordMonkScript_7
# 28 "data/maps/DewfordTown/scripts.pory"
	case 5, DewfordMonkScript_8
DewfordMonkScript_1:
# 32 "data/maps/DewfordTown/scripts.pory"
	getpartysize
# 33 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq DewfordMonkScript_10
# 37 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_10
DewfordMonkScript_9:
# 40 "data/maps/DewfordTown/scripts.pory"
	removeobject 6
# 41 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_MONK_MET
# 42 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_MONK_DEWFORD_ENCOUNTER, 1
# 43 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordMonkScript_3:
# 18 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_3
# 19 "data/maps/DewfordTown/scripts.pory"
	giveegg SPECIES_FRIGIBAX
	goto DewfordMonkScript_1

DewfordMonkScript_4:
# 20 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_4
# 21 "data/maps/DewfordTown/scripts.pory"
	giveegg SPECIES_TINKATON
	goto DewfordMonkScript_1

DewfordMonkScript_5:
# 22 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_5
# 23 "data/maps/DewfordTown/scripts.pory"
	giveegg SPECIES_YANMA
	goto DewfordMonkScript_1

DewfordMonkScript_6:
# 24 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_6
# 25 "data/maps/DewfordTown/scripts.pory"
	giveegg SPECIES_LAPRAS
	goto DewfordMonkScript_1

DewfordMonkScript_7:
# 26 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_7
# 27 "data/maps/DewfordTown/scripts.pory"
	giveegg SPECIES_SCRAGGY
	goto DewfordMonkScript_1

DewfordMonkScript_8:
# 28 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_8
# 29 "data/maps/DewfordTown/scripts.pory"
	giveegg SPECIES_DARUMAKA
	goto DewfordMonkScript_1

DewfordMonkScript_10:
# 34 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordMonkScript_Text_9
	goto DewfordMonkScript_9


# 48 "data/maps/DewfordTown/scripts.pory"
PlayerFaceMonk:
# 49 "data/maps/DewfordTown/scripts.pory"
	face_right
	step_end

# 54 "data/maps/DewfordTown/scripts.pory"
MonkApproach:
# 55 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 56 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 58 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 59 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 60 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 61 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 62 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 63 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 64 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 66 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 67 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 68 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 70 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 73 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 74 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 75 "data/maps/DewfordTown/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/DewfordTown/scripts.pory"

# 80 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 81 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 82 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 83 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 84 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 85 "data/maps/DewfordTown/scripts.pory"

# 86 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 87 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 88 "data/maps/DewfordTown/scripts.pory"

# 89 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 7
# 90 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 8
# 91 "data/maps/DewfordTown/scripts.pory"

# 92 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 93 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 94 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 95 "data/maps/DewfordTown/scripts.pory"

# 96 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 97 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 98 "data/maps/DewfordTown/scripts.pory"
	end
# 99 "data/maps/DewfordTown/scripts.pory"

# 100 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 101 "data/maps/DewfordTown/scripts.pory"
	lock
# 102 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 103 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 104 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 105 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 106 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 107 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 109 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 110 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 111 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 112 "data/maps/DewfordTown/scripts.pory"
	end
# 113 "data/maps/DewfordTown/scripts.pory"

# 114 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 115 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 116 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 117 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 118 "data/maps/DewfordTown/scripts.pory"
	release
# 119 "data/maps/DewfordTown/scripts.pory"
	end
# 120 "data/maps/DewfordTown/scripts.pory"

# 121 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 122 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 123 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 124 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 125 "data/maps/DewfordTown/scripts.pory"
	release
# 126 "data/maps/DewfordTown/scripts.pory"
	end
# 127 "data/maps/DewfordTown/scripts.pory"

# 128 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 129 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 130 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 131 "data/maps/DewfordTown/scripts.pory"
	release
# 132 "data/maps/DewfordTown/scripts.pory"
	end
# 133 "data/maps/DewfordTown/scripts.pory"

# 134 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 135 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 136 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 137 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 138 "data/maps/DewfordTown/scripts.pory"
	release
# 139 "data/maps/DewfordTown/scripts.pory"
	end
# 140 "data/maps/DewfordTown/scripts.pory"

# 141 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 142 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 143 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 144 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 145 "data/maps/DewfordTown/scripts.pory"
	end
# 146 "data/maps/DewfordTown/scripts.pory"

# 147 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 148 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 149 "data/maps/DewfordTown/scripts.pory"
	end
# 150 "data/maps/DewfordTown/scripts.pory"

# 151 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 152 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 153 "data/maps/DewfordTown/scripts.pory"
	end
# 154 "data/maps/DewfordTown/scripts.pory"

# 155 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 156 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 157 "data/maps/DewfordTown/scripts.pory"
	end
# 158 "data/maps/DewfordTown/scripts.pory"

# 159 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 160 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 161 "data/maps/DewfordTown/scripts.pory"
	end
# 162 "data/maps/DewfordTown/scripts.pory"

# 163 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 164 "data/maps/DewfordTown/scripts.pory"
	lock
# 165 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 166 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 167 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 168 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 169 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 170 "data/maps/DewfordTown/scripts.pory"
	end
# 171 "data/maps/DewfordTown/scripts.pory"

# 172 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 173 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 174 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 175 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 176 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 177 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 178 "data/maps/DewfordTown/scripts.pory"
	release
# 179 "data/maps/DewfordTown/scripts.pory"
	end
# 180 "data/maps/DewfordTown/scripts.pory"

# 181 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 182 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown/scripts.pory"
	release
# 184 "data/maps/DewfordTown/scripts.pory"
	end
# 185 "data/maps/DewfordTown/scripts.pory"

# 186 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 187 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 188 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 189 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 190 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 191 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 192 "data/maps/DewfordTown/scripts.pory"
	end
# 193 "data/maps/DewfordTown/scripts.pory"

# 194 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 195 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 196 "data/maps/DewfordTown/scripts.pory"
	release
# 197 "data/maps/DewfordTown/scripts.pory"
	end
# 198 "data/maps/DewfordTown/scripts.pory"

# 199 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 200 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 201 "data/maps/DewfordTown/scripts.pory"
	release
# 202 "data/maps/DewfordTown/scripts.pory"
	end
# 203 "data/maps/DewfordTown/scripts.pory"

# 204 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 205 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 206 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 207 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 208 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 209 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 210 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 211 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 212 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 214 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 215 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 216 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 217 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 219 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 220 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 221 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 223 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 224 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 225 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 226 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 227 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 228 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 229 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 230 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 231 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 232 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 233 "data/maps/DewfordTown/scripts.pory"
	release
# 234 "data/maps/DewfordTown/scripts.pory"
	end
# 235 "data/maps/DewfordTown/scripts.pory"

# 236 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 237 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 238 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 239 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 240 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 241 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 243 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 244 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 246 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 247 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 248 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 249 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 251 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 252 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 253 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 254 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 255 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 256 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 257 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 258 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 260 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 261 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 262 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 263 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 264 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 265 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 266 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 267 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 268 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 269 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 270 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 271 "data/maps/DewfordTown/scripts.pory"
	release
# 272 "data/maps/DewfordTown/scripts.pory"
	end
# 273 "data/maps/DewfordTown/scripts.pory"

# 274 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 275 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 276 "data/maps/DewfordTown/scripts.pory"
	return
# 277 "data/maps/DewfordTown/scripts.pory"

# 278 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 279 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 280 "data/maps/DewfordTown/scripts.pory"
	return
# 281 "data/maps/DewfordTown/scripts.pory"

# 282 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 308 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 309 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 310 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 311 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 312 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 313 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 314 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 315 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 316 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 317 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 318 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 319 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 320 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 321 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 322 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 323 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 324 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 325 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 326 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 327 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 328 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 329 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 330 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 331 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 332 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 333 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 356 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 357 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 358 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 359 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 360 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 361 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 362 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 363 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 364 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 365 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 366 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 367 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 368 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 369 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 370 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 371 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 372 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 373 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 374 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 375 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 376 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 377 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 378 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 379 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 380 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 381 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 387 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 388 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 389 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 477 "data/maps/DewfordTown/scripts.pory"
	step_end
# 478 "data/maps/DewfordTown/scripts.pory"

# 479 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 523 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 527 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 529 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 533 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 535 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 541 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 545 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 549 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 551 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 553 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 555 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 557 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 561 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 562 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 563 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 566 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 567 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 568 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 569 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 573 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 579 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 581 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 583 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 585 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 589 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 591 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 593 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 594 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 595 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 597 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 598 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 599 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 600 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 601 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 603 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 604 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 605 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 606 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 607 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 608 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 609 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 610 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 611 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 612 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 615 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 617 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 618 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 619 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 621 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 627 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 629 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 631 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 635 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 636 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 637 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 638 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 639 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 640 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 641 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 642 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 643 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 644 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 645 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 646 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 647 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 648 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 649 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 650 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 651 "data/maps/DewfordTown/scripts.pory"
	step_end
# 652 "data/maps/DewfordTown/scripts.pory"

# 653 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 654 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 655 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 656 "data/maps/DewfordTown/scripts.pory"
	step_end
# 657 "data/maps/DewfordTown/scripts.pory"

# 658 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 659 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 660 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 661 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 662 "data/maps/DewfordTown/scripts.pory"
	step_end
# 663 "data/maps/DewfordTown/scripts.pory"

# 664 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 665 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 666 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 667 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 668 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 669 "data/maps/DewfordTown/scripts.pory"
	step_end
# 670 "data/maps/DewfordTown/scripts.pory"

# 671 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 672 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 673 "data/maps/DewfordTown/scripts.pory"
	step_end
# 674 "data/maps/DewfordTown/scripts.pory"

# 675 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 676 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 677 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 678 "data/maps/DewfordTown/scripts.pory"
	step_end
# 679 "data/maps/DewfordTown/scripts.pory"

# 680 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 681 "data/maps/DewfordTown/scripts.pory"
	lock
# 682 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 683 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 684 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 685 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 686 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 687 "data/maps/DewfordTown/scripts.pory"
	end
# 688 "data/maps/DewfordTown/scripts.pory"

# 689 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 690 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 691 "data/maps/DewfordTown/scripts.pory"
	release
# 692 "data/maps/DewfordTown/scripts.pory"
	end
# 693 "data/maps/DewfordTown/scripts.pory"

# 694 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 695 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 696 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 697 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 698 "data/maps/DewfordTown/scripts.pory"
	lock
# 699 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 700 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 701 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 702 "data/maps/DewfordTown/scripts.pory"
	end
# 703 "data/maps/DewfordTown/scripts.pory"

# 704 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 705 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 706 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 707 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 708 "data/maps/DewfordTown/scripts.pory"
	release
# 709 "data/maps/DewfordTown/scripts.pory"
	end
# 710 "data/maps/DewfordTown/scripts.pory"

# 711 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 712 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 713 "data/maps/DewfordTown/scripts.pory"
	release
# 714 "data/maps/DewfordTown/scripts.pory"
	end
# 715 "data/maps/DewfordTown/scripts.pory"

# 716 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 717 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 718 "data/maps/DewfordTown/scripts.pory"
	release
# 719 "data/maps/DewfordTown/scripts.pory"
	end
# 720 "data/maps/DewfordTown/scripts.pory"

# 721 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 722 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
# 723 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 725 "data/maps/DewfordTown/scripts.pory"

# 726 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 727 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN\n"
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 729 "data/maps/DewfordTown/scripts.pory"

# 730 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 731 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\n"
# 732 "data/maps/DewfordTown/scripts.pory"
	.string "LEADER: BRAWLY\l"
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 734 "data/maps/DewfordTown/scripts.pory"

# 735 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 736 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
# 737 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 738 "data/maps/DewfordTown/scripts.pory"

# 739 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 740 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 741 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 742 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 744 "data/maps/DewfordTown/scripts.pory"

# 745 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 746 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
# 747 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER?\p"
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "Or were you meaning to sail back to\n"
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "PETALBURG?$"
# 750 "data/maps/DewfordTown/scripts.pory"

# 751 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 752 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 755 "data/maps/DewfordTown/scripts.pory"

# 756 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 757 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 758 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 759 "data/maps/DewfordTown/scripts.pory"

# 760 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 762 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 763 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 765 "data/maps/DewfordTown/scripts.pory"

# 766 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 767 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 768 "data/maps/DewfordTown/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 770 "data/maps/DewfordTown/scripts.pory"

# 771 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 772 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 773 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 774 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 775 "data/maps/DewfordTown/scripts.pory"

# 776 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 777 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, is it?\p"
# 778 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 779 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 780 "data/maps/DewfordTown/scripts.pory"

# 781 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 782 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 783 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail again!$"
# 784 "data/maps/DewfordTown/scripts.pory"

# 785 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 786 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 787 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 788 "data/maps/DewfordTown/scripts.pory"

# 789 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 790 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 791 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 793 "data/maps/DewfordTown/scripts.pory"

# 794 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 795 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 797 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 798 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 799 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 800 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 801 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 802 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 803 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 804 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 805 "data/maps/DewfordTown/scripts.pory"

# 806 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 807 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 809 "data/maps/DewfordTown/scripts.pory"

# 810 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 811 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 813 "data/maps/DewfordTown/scripts.pory"

# 814 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 815 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 816 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 817 "data/maps/DewfordTown/scripts.pory"

# 818 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 820 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 821 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 822 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 828 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 829 "data/maps/DewfordTown/scripts.pory"

# 830 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 831 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 832 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 835 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 836 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 837 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 838 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 839 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 840 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 841 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 842 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 843 "data/maps/DewfordTown/scripts.pory"

# 844 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 845 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 846 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 847 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 848 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 849 "data/maps/DewfordTown/scripts.pory"

# 850 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 851 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 852 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 854 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 855 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 856 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 857 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 858 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 859 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 860 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 861 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 862 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 863 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 864 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 865 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 866 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 867 "data/maps/DewfordTown/scripts.pory"

# 868 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 869 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 870 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 871 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 872 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 873 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 874 "data/maps/DewfordTown/scripts.pory"

# 875 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 876 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 877 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 878 "data/maps/DewfordTown/scripts.pory"

# 879 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 880 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 881 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 882 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"

DewfordMonkScript_Text_0:
# 11 "data/maps/DewfordTown/scripts.pory"
	.string "Bruh, I just lost all my money opening\n"
	.string "Elite Trainer boxes and betting on\l"
	.string "Rapidash! You gotta lend me some money!$"

DewfordMonkScript_Text_1:
# 12 "data/maps/DewfordTown/scripts.pory"
	.string "Fuck you, bruh.$"

DewfordMonkScript_Text_2:
# 13 "data/maps/DewfordTown/scripts.pory"
	.string "check out my egg from vietnam$"

DewfordMonkScript_Text_3:
# 18 "data/maps/DewfordTown/scripts.pory"
	.string "frigibax$"

DewfordMonkScript_Text_4:
# 20 "data/maps/DewfordTown/scripts.pory"
	.string "tinkaton$"

DewfordMonkScript_Text_5:
# 22 "data/maps/DewfordTown/scripts.pory"
	.string "yanma$"

DewfordMonkScript_Text_6:
# 24 "data/maps/DewfordTown/scripts.pory"
	.string "lapras$"

DewfordMonkScript_Text_7:
# 26 "data/maps/DewfordTown/scripts.pory"
	.string "scraggy$"

DewfordMonkScript_Text_8:
# 28 "data/maps/DewfordTown/scripts.pory"
	.string "darumaka$"

DewfordMonkScript_Text_9:
# 34 "data/maps/DewfordTown/scripts.pory"
	.string "bruh you aint$"

DewfordMonkScript_Text_10:
# 37 "data/maps/DewfordTown/scripts.pory"
	.string "take this egg egg$"
