#ifndef RULES_INI_AIRCRAFT
#define RULES_INI_AIRCRAFT

// aircraft rules
#define CANT_HOVER_RULE "CantHover"
#define CANT_HOVER_RULE_UPPER "CANTHOVER"

#define CAN_LAND_RULE "CanLand"
#define CAN_LAND_RULE_UPPER "CANLAND"

#define HAS_ROTOR_RULE "HasRotor"
#define HAS_ROTOR_RULE_UPPER "HASROTOR"

#define AIRCRAFT_RULES CANT_HOVER_RULE, \
	CAN_LAND_RULE, \
	HAS_ROTOR_RULE, \
    SHARED_UNIT_AIRCRAFT_RULES, \
    SHARED_RULES

#define AIRCRAFT_RULE_COUNT (unsigned) 3 + SHARED_UNIT_AIRCRAFT_RULE_COUNT + SHARED_RULE_COUNT

// aircraft rules
#define Read_Cant_Hover(section, defaultValue) Read_Bool_From_Rules_Ini(section, CANT_HOVER_RULE, defaultValue)

#define Read_Has_Rotor(section, defaultValue) Read_Bool_From_Rules_Ini(section, HAS_ROTOR_RULE, defaultValue)

#define Read_Can_Land(section, defaultValue) Read_Bool_From_Rules_Ini(section, CAN_LAND_RULE, defaultValue)

#endif