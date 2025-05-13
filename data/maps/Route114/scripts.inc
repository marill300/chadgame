MeteorFallsMonkScript::
# 3 "data/maps/Route114/scripts.pory"
	lock
# 4 "data/maps/Route114/scripts.pory"
	addobject 28
# 5 "data/maps/Route114/scripts.pory"
	setobjectxy 28, 9, 64
# 7 "data/maps/Route114/scripts.pory"
	msgbox MeteorFallsMonkScript_Text_0
# 8 "data/maps/Route114/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_PLACEHOLDER, MeteorFallsMonkScript_Text_1
# 9 "data/maps/Route114/scripts.pory"
	delay 30
# 13 "data/maps/Route114/scripts.pory"
	removeobject 28
# 14 "data/maps/Route114/scripts.pory"
	setvar VAR_MONK_METEOR_ENCOUNTER, 1
# 15 "data/maps/Route114/scripts.pory"
	release
	end


# 22 "data/maps/Route114/scripts.pory"

# 23 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 24 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 25 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 26 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 27 "data/maps/Route114/scripts.pory"
	.byte 0
# 28 "data/maps/Route114/scripts.pory"

# 29 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 30 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 31 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 32 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 33 "data/maps/Route114/scripts.pory"
	end
# 34 "data/maps/Route114/scripts.pory"

# 35 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 36 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 37 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 38 "data/maps/Route114/scripts.pory"
	end
# 39 "data/maps/Route114/scripts.pory"

# 40 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 41 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 42 "data/maps/Route114/scripts.pory"
	.2byte 0
# 43 "data/maps/Route114/scripts.pory"

# 44 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 45 "data/maps/Route114/scripts.pory"
	lock
# 46 "data/maps/Route114/scripts.pory"
	faceplayer
# 47 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 48 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 49 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 50 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 51 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 52 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 53 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 54 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 55 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 56 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 57 "data/maps/Route114/scripts.pory"
	release
# 58 "data/maps/Route114/scripts.pory"
	end
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 61 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 62 "data/maps/Route114/scripts.pory"
	release
# 63 "data/maps/Route114/scripts.pory"
	end
# 64 "data/maps/Route114/scripts.pory"

# 65 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 66 "data/maps/Route114/scripts.pory"
	lock
# 67 "data/maps/Route114/scripts.pory"
	faceplayer
# 68 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 69 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 70 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 71 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 72 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 73 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 74 "data/maps/Route114/scripts.pory"
	release
# 75 "data/maps/Route114/scripts.pory"
	end
# 76 "data/maps/Route114/scripts.pory"

# 77 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 78 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 79 "data/maps/Route114/scripts.pory"
	release
# 80 "data/maps/Route114/scripts.pory"
	end
# 81 "data/maps/Route114/scripts.pory"

# 82 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 83 "data/maps/Route114/scripts.pory"
	lock
# 84 "data/maps/Route114/scripts.pory"
	faceplayer
# 85 "data/maps/Route114/scripts.pory"
	waitse
# 86 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 87 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 88 "data/maps/Route114/scripts.pory"
	waitmoncry
# 89 "data/maps/Route114/scripts.pory"
	release
# 90 "data/maps/Route114/scripts.pory"
	end
# 91 "data/maps/Route114/scripts.pory"

# 92 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 93 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 97 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 98 "data/maps/Route114/scripts.pory"
	end
# 99 "data/maps/Route114/scripts.pory"

# 100 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 101 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 102 "data/maps/Route114/scripts.pory"
	end
# 103 "data/maps/Route114/scripts.pory"

# 104 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 105 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 106 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route114/scripts.pory"
	end
# 108 "data/maps/Route114/scripts.pory"

# 109 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 110 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 111 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route114/scripts.pory"
	end
# 113 "data/maps/Route114/scripts.pory"

# 114 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 115 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 116 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route114/scripts.pory"
	end
# 118 "data/maps/Route114/scripts.pory"

# 119 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 120 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 121 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route114/scripts.pory"
	end
# 123 "data/maps/Route114/scripts.pory"

# 124 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 125 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 126 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 127 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 128 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 129 "data/maps/Route114/scripts.pory"
	release
# 130 "data/maps/Route114/scripts.pory"
	end
# 131 "data/maps/Route114/scripts.pory"

# 132 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 133 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 134 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 136 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 137 "data/maps/Route114/scripts.pory"
	release
# 138 "data/maps/Route114/scripts.pory"
	end
# 139 "data/maps/Route114/scripts.pory"

# 140 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 141 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 142 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 143 "data/maps/Route114/scripts.pory"
	end
# 144 "data/maps/Route114/scripts.pory"

# 145 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 146 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 147 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 148 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 149 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 150 "data/maps/Route114/scripts.pory"
	release
# 151 "data/maps/Route114/scripts.pory"
	end
# 152 "data/maps/Route114/scripts.pory"

# 153 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 154 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 155 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 157 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 158 "data/maps/Route114/scripts.pory"
	release
# 159 "data/maps/Route114/scripts.pory"
	end
# 160 "data/maps/Route114/scripts.pory"

# 161 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 162 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 163 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route114/scripts.pory"
	end
# 165 "data/maps/Route114/scripts.pory"

# 166 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 167 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 168 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route114/scripts.pory"
	end
# 170 "data/maps/Route114/scripts.pory"

# 171 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 172 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
	end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 177 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 178 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route114/scripts.pory"
	end
# 180 "data/maps/Route114/scripts.pory"

# 181 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 182 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 183 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route114/scripts.pory"
	end
# 185 "data/maps/Route114/scripts.pory"

# 186 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 187 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 188 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route114/scripts.pory"
	end
# 190 "data/maps/Route114/scripts.pory"

# 191 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 192 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 193 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route114/scripts.pory"
	end
# 195 "data/maps/Route114/scripts.pory"

# 196 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 197 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 198 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route114/scripts.pory"
	end
# 200 "data/maps/Route114/scripts.pory"

# 201 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 202 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 203 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 204 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 205 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 206 "data/maps/Route114/scripts.pory"

# 207 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 208 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 209 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 210 "data/maps/Route114/scripts.pory"

# 211 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 212 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 213 "data/maps/Route114/scripts.pory"

# 214 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 215 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 216 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 217 "data/maps/Route114/scripts.pory"

# 218 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 219 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 220 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 221 "data/maps/Route114/scripts.pory"

# 222 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 223 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

MeteorFallsMonkScript_Text_0:
# 7 "data/maps/Route114/scripts.pory"
	.string "Bruh, I just lost all my money opening\n"
	.string "Elite Trainer boxes and betting on\l"
	.string "Rapidash! You gotta lend me some money!$"

MeteorFallsMonkScript_Text_1:
# 8 "data/maps/Route114/scripts.pory"
	.string "Fuck you, bruh.$"
