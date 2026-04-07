# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 5 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 6 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 9 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 22 "data/maps/LittlerootTown/scripts.pory"

# 23 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 24 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 30 "data/maps/LittlerootTown/scripts.pory"

# 31 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 39 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 40 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 41 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 42 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 43 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 44 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 50 "data/maps/LittlerootTown/scripts.pory"
	end
# 51 "data/maps/LittlerootTown/scripts.pory"

# 52 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 53 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 54 "data/maps/LittlerootTown/scripts.pory"
	return
# 55 "data/maps/LittlerootTown/scripts.pory"

# 56 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 57 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 58 "data/maps/LittlerootTown/scripts.pory"
	return
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 62 "data/maps/LittlerootTown/scripts.pory"
	return
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 65 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 70 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 72 "data/maps/LittlerootTown/scripts.pory"
	return
# 73 "data/maps/LittlerootTown/scripts.pory"

# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 75 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 76 "data/maps/LittlerootTown/scripts.pory"
	return
# 77 "data/maps/LittlerootTown/scripts.pory"

# 78 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 79 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 80 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 81 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 90 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TYROGUE, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 93 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 94 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TYROGUE, 5, 9
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 102 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TYROGUE, 14, 9
# 103 "data/maps/LittlerootTown/scripts.pory"
	return
# 104 "data/maps/LittlerootTown/scripts.pory"

# 105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 106 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 107 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 108 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 109 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 112 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 113 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 114 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 115 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 116 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 117 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 118 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 119 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 120 "data/maps/LittlerootTown/scripts.pory"
	end
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 123 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 125 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 126 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 127 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 128 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 129 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 130 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 131 "data/maps/LittlerootTown/scripts.pory"
	end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 134 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 135 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 136 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 137 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 139 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 140 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 141 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 142 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 144 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 145 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 146 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 149 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 150 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 159 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 160 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 161 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 163 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 164 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 165 "data/maps/LittlerootTown/scripts.pory"
	return
# 166 "data/maps/LittlerootTown/scripts.pory"

# 167 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 168 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 169 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 170 "data/maps/LittlerootTown/scripts.pory"

# 171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 172 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 174 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 175 "data/maps/LittlerootTown/scripts.pory"

# 176 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 177 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 178 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 179 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 185 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 188 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 189 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 193 "data/maps/LittlerootTown/scripts.pory"

# 194 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 198 "data/maps/LittlerootTown/scripts.pory"

# 199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 200 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 201 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 202 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown/scripts.pory"

# 206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 207 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 208 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 209 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 210 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 212 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 213 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 214 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 215 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 216 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 217 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 218 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 219 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 220 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 221 "data/maps/LittlerootTown/scripts.pory"
	end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 224 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 225 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 228 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 229 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 230 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 231 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 232 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 233 "data/maps/LittlerootTown/scripts.pory"
	end
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 236 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 237 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 238 "data/maps/LittlerootTown/scripts.pory"
	end
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	end
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 246 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 250 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 254 "data/maps/LittlerootTown/scripts.pory"
	lock
# 255 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 256 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 257 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 258 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 259 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown/scripts.pory"
	release
# 261 "data/maps/LittlerootTown/scripts.pory"
	end
# 262 "data/maps/LittlerootTown/scripts.pory"

# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 264 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 267 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 268 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 270 "data/maps/LittlerootTown/scripts.pory"
	release
# 271 "data/maps/LittlerootTown/scripts.pory"
	end
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 274 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 275 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown/scripts.pory"
	release
# 277 "data/maps/LittlerootTown/scripts.pory"
	end
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 280 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 281 "data/maps/LittlerootTown/scripts.pory"
	release
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 285 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 286 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 287 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 292 "data/maps/LittlerootTown/scripts.pory"
	end
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 295 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 296 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 298 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 299 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 301 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 302 "data/maps/LittlerootTown/scripts.pory"
	return
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 305 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 306 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 307 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 308 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 309 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 311 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 313 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 317 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 318 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 319 "data/maps/LittlerootTown/scripts.pory"

# 320 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 322 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 334 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 337 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 339 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 343 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 344 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 345 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 347 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 348 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 350 "data/maps/LittlerootTown/scripts.pory"
	end
# 351 "data/maps/LittlerootTown/scripts.pory"

# 352 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 353 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 354 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 355 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 356 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 365 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 366 "data/maps/LittlerootTown/scripts.pory"

# 367 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 377 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 378 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 379 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 380 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 381 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 383 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 384 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 385 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 386 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 388 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 389 "data/maps/LittlerootTown/scripts.pory"
	end
# 390 "data/maps/LittlerootTown/scripts.pory"

# 391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 392 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 396 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 397 "data/maps/LittlerootTown/scripts.pory"
	end
# 398 "data/maps/LittlerootTown/scripts.pory"

# 399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 400 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 401 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 402 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 403 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 404 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 405 "data/maps/LittlerootTown/scripts.pory"
	end
# 406 "data/maps/LittlerootTown/scripts.pory"

# 407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 408 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 409 "data/maps/LittlerootTown/scripts.pory"
	return
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 412 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 413 "data/maps/LittlerootTown/scripts.pory"
	return
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 416 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 417 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 418 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 419 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 420 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 421 "data/maps/LittlerootTown/scripts.pory"
	end
# 422 "data/maps/LittlerootTown/scripts.pory"

# 423 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 424 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 425 "data/maps/LittlerootTown/scripts.pory"
	return
# 426 "data/maps/LittlerootTown/scripts.pory"

# 427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 428 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 432 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 433 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_TYROGUE, 10, 9
# 435 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 436 "data/maps/LittlerootTown/scripts.pory"
	end
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 439 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 440 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 441 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_TYROGUE, 11, 9
# 442 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 446 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 447 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 448 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 449 "data/maps/LittlerootTown/scripts.pory"
	end
# 450 "data/maps/LittlerootTown/scripts.pory"

# 451 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 452 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 453 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 454 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 455 "data/maps/LittlerootTown/scripts.pory"
	end
# 456 "data/maps/LittlerootTown/scripts.pory"

# 457 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 458 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 459 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 460 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 461 "data/maps/LittlerootTown/scripts.pory"
	end
# 462 "data/maps/LittlerootTown/scripts.pory"

# 463 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 464 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 465 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 466 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 467 "data/maps/LittlerootTown/scripts.pory"
	end
# 468 "data/maps/LittlerootTown/scripts.pory"

# 469 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 470 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayerMale
# 471 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 472 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 473 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 474 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeMale
# 479 "data/maps/LittlerootTown/scripts.pory"

# 480 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 481 "data/maps/LittlerootTown/scripts.pory"
	end
# 482 "data/maps/LittlerootTown/scripts.pory"

# 483 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 484 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 485 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 486 "data/maps/LittlerootTown/scripts.pory"
	return
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 489 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 490 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 491 "data/maps/LittlerootTown/scripts.pory"
	return
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 494 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, Common_Movement_WalkInPlaceFasterRight
# 495 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 496 "data/maps/LittlerootTown/scripts.pory"
	return
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 499 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, Common_Movement_WalkInPlaceFasterLeft
# 500 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 501 "data/maps/LittlerootTown/scripts.pory"
	return
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 504 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 505 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 506 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 507 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 508 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 509 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 514 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 515 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomApproachPlayer0
# 517 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/LittlerootTown/scripts.pory"
	return
# 519 "data/maps/LittlerootTown/scripts.pory"

# 520 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 521 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 522 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 523 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomApproachPlayer1
# 524 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 528 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 529 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 530 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomApproachPlayerMale2
# 531 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown/scripts.pory"
	return
# 533 "data/maps/LittlerootTown/scripts.pory"

# 534 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 535 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 536 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomApproachPlayerMale3
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 542 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 543 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomApproachPlayerMale4
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 549 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomApproachPlayerMale5
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	return
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 556 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 557 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 558 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 559 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 560 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 561 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomReturnHome0
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	return
# 569 "data/maps/LittlerootTown/scripts.pory"

# 570 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomReturnHome1
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	return
# 574 "data/maps/LittlerootTown/scripts.pory"

# 575 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomReturnHomeMale2
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomExitThroughDoor
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_TYROGUE, MAP_LITTLEROOT_TOWN
# 583 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 585 "data/maps/LittlerootTown/scripts.pory"
	return
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomReturnHomeMale3
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 591 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomExitThroughDoor
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_TYROGUE, MAP_LITTLEROOT_TOWN
# 595 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 597 "data/maps/LittlerootTown/scripts.pory"
	return
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomReturnHomeMale4
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomExitThroughDoor
# 605 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_TYROGUE, MAP_LITTLEROOT_TOWN
# 607 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 609 "data/maps/LittlerootTown/scripts.pory"
	return
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 612 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomReturnHomeMale5
# 613 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 614 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 615 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 616 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomExitThroughDoor
# 617 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 618 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_TYROGUE, MAP_LITTLEROOT_TOWN
# 619 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 621 "data/maps/LittlerootTown/scripts.pory"
	return
# 622 "data/maps/LittlerootTown/scripts.pory"

# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 625 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 626 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 627 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 628 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 629 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 630 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 631 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 632 "data/maps/LittlerootTown/scripts.pory"

# 633 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 634 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 635 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 636 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 637 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 638 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 639 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 640 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 641 "data/maps/LittlerootTown/scripts.pory"

# 642 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 643 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 644 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 645 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 646 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 647 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 648 "data/maps/LittlerootTown/scripts.pory"

# 649 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 650 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 651 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 652 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 653 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 654 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 655 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 656 "data/maps/LittlerootTown/scripts.pory"

# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 660 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 666 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 671 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 672 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 673 "data/maps/LittlerootTown/scripts.pory"

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 676 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 677 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 681 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 682 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 685 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 691 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 692 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 696 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 700 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 706 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 707 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 708 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 709 "data/maps/LittlerootTown/scripts.pory"

# 710 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 712 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 713 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 716 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 717 "data/maps/LittlerootTown/scripts.pory"

# 718 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 719 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 720 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 724 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 725 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 726 "data/maps/LittlerootTown/scripts.pory"

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 731 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 732 "data/maps/LittlerootTown/scripts.pory"

# 733 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 738 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 739 "data/maps/LittlerootTown/scripts.pory"

# 740 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 751 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 760 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 768 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 769 "data/maps/LittlerootTown/scripts.pory"

# 770 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 772 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 773 "data/maps/LittlerootTown/scripts.pory"

# 774 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 775 "data/maps/LittlerootTown/scripts.pory"
	lock
# 776 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 777 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 778 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 779 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, Common_Movement_WalkInPlaceFasterUp
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 781 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 782 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 783 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TYROGUE, LittlerootTown_Movement_MomExitThroughDoor
# 784 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 785 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_TYROGUE, MAP_LITTLEROOT_TOWN
# 786 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 788 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 789 "data/maps/LittlerootTown/scripts.pory"
	end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 792 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_TYROGUE
# 793 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 794 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 795 "data/maps/LittlerootTown/scripts.pory"
	release
# 796 "data/maps/LittlerootTown/scripts.pory"
	end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 799 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 800 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 801 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 802 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 803 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 804 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5, ITEM_ABILITY_CAPSULE
# 805 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 806 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 807 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 808 "data/maps/LittlerootTown/scripts.pory"
	return
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 811 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 812 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 813 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 814 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 815 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 816 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 817 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 818 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 819 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 820 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 821 "data/maps/LittlerootTown/scripts.pory"

# 822 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 826 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 827 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 828 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 829 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 830 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 831 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 832 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 833 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 834 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 837 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 838 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 839 "data/maps/LittlerootTown/scripts.pory"

# 840 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 841 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, these shoes came with\n"
# 842 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 843 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 844 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 845 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 846 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 847 "data/maps/LittlerootTown/scripts.pory"

# 848 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 849 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 850 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 852 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 853 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 854 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 855 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 856 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 862 "data/maps/LittlerootTown/scripts.pory"

# 863 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 864 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 865 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 874 "data/maps/LittlerootTown/scripts.pory"

# 875 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 876 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 878 "data/maps/LittlerootTown/scripts.pory"

# 879 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 880 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 881 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 882 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 885 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 887 "data/maps/LittlerootTown/scripts.pory"

# 888 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 889 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 890 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 891 "data/maps/LittlerootTown/scripts.pory"

# 892 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 894 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 895 "data/maps/LittlerootTown/scripts.pory"

# 896 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 897 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 902 "data/maps/LittlerootTown/scripts.pory"

# 903 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 907 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 908 "data/maps/LittlerootTown/scripts.pory"

# 909 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 910 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
