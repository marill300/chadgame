GraniteCave_1F_RuiScript::
# 4 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 5 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_RUI_MET
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	addobject 3
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	setobjectxy 3, 24, 4
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, RuiApproachPlayer
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_RuiScript_Movement_0
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_RuiScript_Text_0
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_RED, GraniteCave_1F_RuiScript_Text_1
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, GraniteCave_1F_RuiScript_Movement_1
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RUI_MET
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_MONK_DEWFORD_ENCOUNTER, 1
# 20 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


# 25 "data/maps/GraniteCave_1F/scripts.pory"
RuiApproachPlayer:
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
	step_end

# 31 "data/maps/GraniteCave_1F/scripts.pory"

# 32 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 33 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 34 "data/maps/GraniteCave_1F/scripts.pory"

# 35 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 40 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 41 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 42 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 45 "data/maps/GraniteCave_1F/scripts.pory"

# 46 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 48 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 49 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 50 "data/maps/GraniteCave_1F/scripts.pory"

# 51 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 52 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	.string "That guy who came by earlier…\n"
# 56 "data/maps/GraniteCave_1F/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 58 "data/maps/GraniteCave_1F/scripts.pory"
	.string "to be all right, but…\p"
# 59 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 60 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 61 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 62 "data/maps/GraniteCave_1F/scripts.pory"

# 63 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 64 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 65 "data/maps/GraniteCave_1F/scripts.pory"
	.string "a POKéMON and use it.\p"
# 66 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 67 "data/maps/GraniteCave_1F/scripts.pory"
	.string "of caves.\p"
# 68 "data/maps/GraniteCave_1F/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 69 "data/maps/GraniteCave_1F/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"

# 10 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_RuiScript_Movement_0:
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	face_right
	step_end

# 15 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_RuiScript_Movement_1:
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
	step_end

GraniteCave_1F_RuiScript_Text_0:
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	.string "queen of england big ben beans on\n"
	.string "toast nonce do you have a loicense for\l"
	.string "that telly$"

GraniteCave_1F_RuiScript_Text_1:
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Long live the Queen.$"
