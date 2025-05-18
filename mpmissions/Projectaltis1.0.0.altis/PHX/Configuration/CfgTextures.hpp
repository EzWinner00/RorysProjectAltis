
/*
    texture : STRING DIRECTORY
*/

class CfgTextures {
    
    /*
    class U_OG_Guerrilla_6_1 {
        textures[] = {
            {"Civilian\Uniforms\Civ_Christmas.jpg", "_side isEqualTo civilian", {0, ""}},
            {"HAVOC\HAVOC_Christmas.jpg", "_side isEqualTo east", {0, ""}}
        };
    };
    */

    // CIV Skins
    class U_Rangemaster {
        textures[] = {
            {"Civilian\Uniforms\civilian_taximan.paa", "_side isEqualTo civilian", {1, ""}},
            {"Police\Uniforms\PCSO.paa", "side player isEqualTo west && { (call life_coplevel) == 1 }", {1, ""}},
            {"Police\Uniforms\PC.paa",   "side player isEqualTo west && { (call life_coplevel) == 2 }", {1, ""}},
            {"Police\Uniforms\SC.paa",   "side player isEqualTo west && { (call life_coplevel) == 3 }", {1, ""}},
            {"Police\Uniforms\PS.paa",   "side player isEqualTo west && { (call life_coplevel) == 4 }", {1, ""}},
            {"Police\Uniforms\PS.paa",   "side player isEqualTo west && { (call life_coplevel) == 5 }", {1, ""}},
            {"Police\Uniforms\PI.paa",   "side player isEqualTo west && { (call life_coplevel) == 6 }", {1, ""}},
            {"Police\Uniforms\CI.paa",   "side player isEqualTo west && { (call life_coplevel) == 7 }", {1, ""}},
            {"Police\Uniforms\SU.paa",   "side player isEqualTo west && { (call life_coplevel) == 8 }", {1, ""}},
            {"Police\Uniforms\CSU.paa",  "side player isEqualTo west && { (call life_coplevel) == 9 }", {1, ""}},
            {"Police\Uniforms\DCC.paa",  "side player isEqualTo west && { (call life_coplevel) == 10 }", {1, ""}},
            {"Police\Uniforms\CC.paa",   "side player isEqualTo west && { (call life_coplevel) >= 11 }", {1, ""}}
        };
    };

    class U_C_Scientist {
        textures[] = {
            {"Civilian\Uniforms\Prisoner.paa", "true", {1, ""}}
        };
    };

    // APC Skins
    class U_O_R_Gorka_01_black_F {
        textures[] = {
            {"Police\Units\RPU_tracksuit.paa", "side player isEqualTo west", {0, ""}}
        };
    };

    // Christmas skin
    class U_BG_Guerrilla_6_1 {
        textures[] = {
            // {"Police\Uniforms\APC_Christmas.jpg", "_side isEqualTo west", {0, ""}},
        };
    };


    class U_O_PilotCoveralls {
        textures[] = {};
    };

    class U_B_CTRG_Soldier_F {
        textures[] = {
            {"Gangs\EvolvE\EvolvEUniform.paa", "_side isEqualTo civilian && ['EvolvE', player] call PHX_fnc_inWhitelistGang", {1, ""}}
        };
    };


    class U_C_Man_casual_2_F {
        textures[] = {
            {"Gangs\TMC\TMC_Uniform.paa", "_side isEqualTo civilian && ['TMC', player] call PHX_fnc_inWhitelistGang", {1, ""}}
        };
    };
    
    class U_B_GhillieSuit : U_B_CTRG_Soldier_F{};
    class U_B_T_Soldier_F : U_B_CTRG_Soldier_F{};
    class U_B_T_Soldier_SL_F : U_B_CTRG_Soldier_F{};

    // NHS Skins
    class U_B_CombatUniform_mcam {
        textures[] = {
            {"Medic\Uniforms\medic_command.paa", "_side isEqualTo independent && { _level >= 6 }", {1, ""}},
            {"Medic\Uniforms\medic_standard.paa", "_side isEqualTo independent", {1, ""}}
        };
    };

    class U_I_CombatUniform {
        textures[] = {
            {"Gangs\2.9\TwoPointNineSkin.paa", "_side isEqualTo civilian && ['TwoPointNine', player] call PHX_fnc_inWhitelistGang", {1, ""}},
            {"Gangs\MBWS\willy_uniform.paa", "_side isEqualTo civilian && ['MBWS', player] call PHX_fnc_inWhitelistGang", {1, ""}},
        };
    };

    class U_O_Wetsuit {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };

    // CSAT
    class U_BG_Guerilla1_1 {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_IG_Guerilla2_1 {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_OG_Guerilla2_3 {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_O_T_Soldier_F {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_O_T_Officer_F {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_BG_Guerilla2_2 {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_OG_Guerilla3_1 {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_BG_leader {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_O_CombatUniform_oucamo {
        textures[] = {
            {"", "_side isEqualTo east", {1, ""}}
        };
    };
    class U_BG_Guerilla1_2_F : U_BG_Guerilla1_1{};

    /*
    class U_IG_Guerrilla_6_1 {
        textures[] = {
            {"Medic\Uniforms\NHS_Christmas.jpg", "_side isEqualTo independent", {0, ""}}
        };
    };
    */

    // NHS Haz
    class U_C_CBRN_Suit_01_White_F {
        textures[] = {
            {"", "_side isEqualTo independent", {1, ""}}
        };
    };

    class U_I_HeliPilotCoveralls {
        textures[] = {
            {"Medic\Uniforms\medic_sar.paa", "_side isEqualTo independent", {1, ""}}
        };
    };
};
