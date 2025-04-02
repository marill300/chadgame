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
	removeobject 6
# 33 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_MONK_MET
# 34 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_MONK_DEWFORD_ENCOUNTER, 1
# 35 "data/maps/DewfordTown/scripts.pory"
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


# 40 "data/maps/DewfordTown/scripts.pory"
PlayerFaceMonk:
# 41 "data/maps/DewfordTown/scripts.pory"
	face_right
	step_end

# 46 "data/maps/DewfordTown/scripts.pory"
MonkApproach:
# 47 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 48 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 50 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 51 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 52 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 53 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 54 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 55 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 56 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 58 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 59 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 60 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 62 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 65 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 66 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 67 "data/maps/DewfordTown/scripts.pory"
	walk_left
	step_end

# 71 "data/maps/DewfordTown/scripts.pory"

# 72 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 73 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 74 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 75 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 76 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 77 "data/maps/DewfordTown/scripts.pory"

# 78 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 79 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 80 "data/maps/DewfordTown/scripts.pory"

# 81 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 7
# 82 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 8
# 83 "data/maps/DewfordTown/scripts.pory"

# 84 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 85 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 86 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 87 "data/maps/DewfordTown/scripts.pory"

# 88 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 89 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 90 "data/maps/DewfordTown/scripts.pory"
	end
# 91 "data/maps/DewfordTown/scripts.pory"

# 92 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 93 "data/maps/DewfordTown/scripts.pory"
	lock
# 94 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 95 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 96 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 97 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 98 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 99 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 101 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 102 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 103 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 104 "data/maps/DewfordTown/scripts.pory"
	end
# 105 "data/maps/DewfordTown/scripts.pory"

# 106 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 107 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 108 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 109 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 110 "data/maps/DewfordTown/scripts.pory"
	release
# 111 "data/maps/DewfordTown/scripts.pory"
	end
# 112 "data/maps/DewfordTown/scripts.pory"

# 113 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 114 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 116 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 117 "data/maps/DewfordTown/scripts.pory"
	release
# 118 "data/maps/DewfordTown/scripts.pory"
	end
# 119 "data/maps/DewfordTown/scripts.pory"

# 120 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 121 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 122 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 123 "data/maps/DewfordTown/scripts.pory"
	release
# 124 "data/maps/DewfordTown/scripts.pory"
	end
# 125 "data/maps/DewfordTown/scripts.pory"

# 126 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 127 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 128 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 129 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 130 "data/maps/DewfordTown/scripts.pory"
	release
# 131 "data/maps/DewfordTown/scripts.pory"
	end
# 132 "data/maps/DewfordTown/scripts.pory"

# 133 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 134 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 135 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 136 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 137 "data/maps/DewfordTown/scripts.pory"
	end
# 138 "data/maps/DewfordTown/scripts.pory"

# 139 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 140 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 141 "data/maps/DewfordTown/scripts.pory"
	end
# 142 "data/maps/DewfordTown/scripts.pory"

# 143 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 144 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 145 "data/maps/DewfordTown/scripts.pory"
	end
# 146 "data/maps/DewfordTown/scripts.pory"

# 147 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 148 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 149 "data/maps/DewfordTown/scripts.pory"
	end
# 150 "data/maps/DewfordTown/scripts.pory"

# 151 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 152 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 153 "data/maps/DewfordTown/scripts.pory"
	end
# 154 "data/maps/DewfordTown/scripts.pory"

# 155 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 156 "data/maps/DewfordTown/scripts.pory"
	lock
# 157 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 158 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 159 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 160 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 161 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 162 "data/maps/DewfordTown/scripts.pory"
	end
# 163 "data/maps/DewfordTown/scripts.pory"

# 164 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 165 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 166 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 167 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 168 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 169 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 170 "data/maps/DewfordTown/scripts.pory"
	release
# 171 "data/maps/DewfordTown/scripts.pory"
	end
# 172 "data/maps/DewfordTown/scripts.pory"

# 173 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 174 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 175 "data/maps/DewfordTown/scripts.pory"
	release
# 176 "data/maps/DewfordTown/scripts.pory"
	end
# 177 "data/maps/DewfordTown/scripts.pory"

# 178 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 179 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 180 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 181 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 182 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 183 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 184 "data/maps/DewfordTown/scripts.pory"
	end
# 185 "data/maps/DewfordTown/scripts.pory"

# 186 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 187 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 188 "data/maps/DewfordTown/scripts.pory"
	release
# 189 "data/maps/DewfordTown/scripts.pory"
	end
# 190 "data/maps/DewfordTown/scripts.pory"

# 191 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 192 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 193 "data/maps/DewfordTown/scripts.pory"
	release
# 194 "data/maps/DewfordTown/scripts.pory"
	end
# 195 "data/maps/DewfordTown/scripts.pory"

# 196 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 197 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 198 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 199 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 200 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 201 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 203 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 204 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 206 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 207 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 208 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 209 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 210 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 211 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 212 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 213 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 215 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 216 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 217 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 218 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 219 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 220 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 221 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 222 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 223 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 224 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 225 "data/maps/DewfordTown/scripts.pory"
	release
# 226 "data/maps/DewfordTown/scripts.pory"
	end
# 227 "data/maps/DewfordTown/scripts.pory"

# 228 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 229 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 230 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 231 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 232 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 233 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 235 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 236 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 238 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 239 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 240 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 241 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 243 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 244 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 245 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 247 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 248 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 249 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 250 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 252 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 253 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 254 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 255 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 256 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 257 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 258 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 259 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 260 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 261 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 262 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 263 "data/maps/DewfordTown/scripts.pory"
	release
# 264 "data/maps/DewfordTown/scripts.pory"
	end
# 265 "data/maps/DewfordTown/scripts.pory"

# 266 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 267 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 268 "data/maps/DewfordTown/scripts.pory"
	return
# 269 "data/maps/DewfordTown/scripts.pory"

# 270 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 271 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 272 "data/maps/DewfordTown/scripts.pory"
	return
# 273 "data/maps/DewfordTown/scripts.pory"

# 274 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 275 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 276 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 277 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 278 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
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
	walk_up
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
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
	walk_fast_left
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 469 "data/maps/DewfordTown/scripts.pory"
	step_end
# 470 "data/maps/DewfordTown/scripts.pory"

# 471 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 621 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 627 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 629 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 631 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 635 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 636 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 637 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 638 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 639 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 640 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 641 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 642 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 643 "data/maps/DewfordTown/scripts.pory"
	step_end
# 644 "data/maps/DewfordTown/scripts.pory"

# 645 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 646 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 647 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 648 "data/maps/DewfordTown/scripts.pory"
	step_end
# 649 "data/maps/DewfordTown/scripts.pory"

# 650 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 651 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 652 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 653 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 654 "data/maps/DewfordTown/scripts.pory"
	step_end
# 655 "data/maps/DewfordTown/scripts.pory"

# 656 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 657 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 658 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 659 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 660 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 661 "data/maps/DewfordTown/scripts.pory"
	step_end
# 662 "data/maps/DewfordTown/scripts.pory"

# 663 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 664 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 665 "data/maps/DewfordTown/scripts.pory"
	step_end
# 666 "data/maps/DewfordTown/scripts.pory"

# 667 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 668 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 669 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 670 "data/maps/DewfordTown/scripts.pory"
	step_end
# 671 "data/maps/DewfordTown/scripts.pory"

# 672 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 673 "data/maps/DewfordTown/scripts.pory"
	lock
# 674 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 675 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 676 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 677 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 678 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 679 "data/maps/DewfordTown/scripts.pory"
	end
# 680 "data/maps/DewfordTown/scripts.pory"

# 681 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 682 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 683 "data/maps/DewfordTown/scripts.pory"
	release
# 684 "data/maps/DewfordTown/scripts.pory"
	end
# 685 "data/maps/DewfordTown/scripts.pory"

# 686 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 687 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 688 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 689 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 690 "data/maps/DewfordTown/scripts.pory"
	lock
# 691 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 692 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 693 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 694 "data/maps/DewfordTown/scripts.pory"
	end
# 695 "data/maps/DewfordTown/scripts.pory"

# 696 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 697 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 698 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 699 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 700 "data/maps/DewfordTown/scripts.pory"
	release
# 701 "data/maps/DewfordTown/scripts.pory"
	end
# 702 "data/maps/DewfordTown/scripts.pory"

# 703 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 704 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 705 "data/maps/DewfordTown/scripts.pory"
	release
# 706 "data/maps/DewfordTown/scripts.pory"
	end
# 707 "data/maps/DewfordTown/scripts.pory"

# 708 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 709 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 710 "data/maps/DewfordTown/scripts.pory"
	release
# 711 "data/maps/DewfordTown/scripts.pory"
	end
# 712 "data/maps/DewfordTown/scripts.pory"

# 713 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 714 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
# 715 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 716 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 717 "data/maps/DewfordTown/scripts.pory"

# 718 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 719 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN\n"
# 720 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 721 "data/maps/DewfordTown/scripts.pory"

# 722 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 723 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\n"
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "LEADER: BRAWLY\l"
# 725 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 726 "data/maps/DewfordTown/scripts.pory"

# 727 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
# 729 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 730 "data/maps/DewfordTown/scripts.pory"

# 731 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 732 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 734 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 735 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 736 "data/maps/DewfordTown/scripts.pory"

# 737 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 738 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER?\p"
# 740 "data/maps/DewfordTown/scripts.pory"
	.string "Or were you meaning to sail back to\n"
# 741 "data/maps/DewfordTown/scripts.pory"
	.string "PETALBURG?$"
# 742 "data/maps/DewfordTown/scripts.pory"

# 743 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 745 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 746 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 747 "data/maps/DewfordTown/scripts.pory"

# 748 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 750 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 751 "data/maps/DewfordTown/scripts.pory"

# 752 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 755 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 756 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 757 "data/maps/DewfordTown/scripts.pory"

# 758 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 759 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 760 "data/maps/DewfordTown/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 762 "data/maps/DewfordTown/scripts.pory"

# 763 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 765 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 766 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 767 "data/maps/DewfordTown/scripts.pory"

# 768 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, is it?\p"
# 770 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 771 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 772 "data/maps/DewfordTown/scripts.pory"

# 773 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 774 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 775 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail again!$"
# 776 "data/maps/DewfordTown/scripts.pory"

# 777 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 778 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 779 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 780 "data/maps/DewfordTown/scripts.pory"

# 781 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 782 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 783 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 784 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 785 "data/maps/DewfordTown/scripts.pory"

# 786 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 787 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 788 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 789 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 790 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 791 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 793 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 794 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 795 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 797 "data/maps/DewfordTown/scripts.pory"

# 798 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 799 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 800 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 801 "data/maps/DewfordTown/scripts.pory"

# 802 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 803 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 804 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 805 "data/maps/DewfordTown/scripts.pory"

# 806 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 807 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 809 "data/maps/DewfordTown/scripts.pory"

# 810 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 811 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 813 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 814 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 815 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 816 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 817 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 818 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 820 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 821 "data/maps/DewfordTown/scripts.pory"

# 822 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 828 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 829 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 830 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 831 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 832 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 835 "data/maps/DewfordTown/scripts.pory"

# 836 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 837 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 838 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 839 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 840 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 841 "data/maps/DewfordTown/scripts.pory"

# 842 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 843 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 844 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 845 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 846 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 847 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 848 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 849 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 850 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 851 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 852 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 854 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 855 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 856 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 857 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 858 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 859 "data/maps/DewfordTown/scripts.pory"

# 860 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 861 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 862 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 863 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 864 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 865 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 866 "data/maps/DewfordTown/scripts.pory"

# 867 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 868 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 869 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 870 "data/maps/DewfordTown/scripts.pory"

# 871 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 872 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 873 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 874 "data/maps/DewfordTown/scripts.pory"
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
	.string "Vietnam$"

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
