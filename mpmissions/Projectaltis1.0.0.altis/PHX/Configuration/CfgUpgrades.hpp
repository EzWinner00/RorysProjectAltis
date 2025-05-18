class CfgUpgrades {
	class Marker {
        title = "Map Marker";
        condition = "!('Marker' in ((cursorObject getVariable ['house_upgrades',[]]) select 2))";
        action = "[cursorObject, 'upgrade', 'Marker'] call PHX_fnc_houseUpgrade";
        description = "Changes house marker to red when being broken into.";
        price = 650000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\compass_ca.paa";
    };

	class Alarm {
        title = "Alarm";
        condition = "!('Alarm' in ((cursorObject getVariable ['house_upgrades',[]]) select 2))";
        action = "[cursorObject, 'upgrade', 'Alarm'] call PHX_fnc_houseUpgrade";
        description = "Sends notification when being broken into.";
        price = 75000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\radio_ca.paa";
    };

	class ATM {
        title = "ATM";
        condition = "!('ATM' in ((cursorObject getVariable ['house_upgrades',[]]) select 2))";
        action = "[cursorObject, 'upgrade', 'ATM'] call PHX_fnc_houseUpgrade";
        description = "Allows you to access the ATM in the house.";
        price = 750000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\cargoMisc_ca.paa";
    };

	class Clothing {
        title = "Clothing Store";
        condition = "!('Clothing' in ((cursorObject getVariable ['house_upgrades',[]]) select 2))";
        action = "[cursorObject, 'upgrade', 'Clothing'] call PHX_fnc_houseUpgrade";
        description = "Allows you to access the Clothing Store in the house.";
        price = 500000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\uniform_ca.paa";
    };

	class Garage {
        title = "Garage";
        condition = "!('Garage' in ((cursorObject getVariable ['house_upgrades',[]]) select 2)) && (typeOf(cursorObject) isEqualTo 'Land_i_Shed_Ind_F')";
        action = "[cursorObject, 'upgrade', 'Garage'] call PHX_fnc_houseUpgrade";
        description = "Allows you to access a basic garage at the warehouse.";
        price = 1000000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\spaceGarage_ca.paa";
    };

	class Spawn {
        title = "Spawn Point";
        condition = "!('Spawn' in ((cursorObject getVariable ['house_upgrades',[]]) select 2))";
        action = "[cursorObject, 'upgrade', 'Spawn'] call PHX_fnc_houseUpgrade";
        description = "Allows you to spawn at the house.";
        price = 150000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa";
    };

	class Titanium_Locks_1 {
        title = "Titanium Locks Level 1";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 0) isEqualTo 0";
        action = "[cursorObject, 'locks', 10] call PHX_fnc_houseUpgrade";
        description = "Increases time to boltcut by 10%.";
        price = 150000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayDynamicGroups\Lock.paa";
    }; 

	class Titanium_Locks_2 {
        title = "Titanium Locks Level 2";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 0) isEqualTo 10";
        action = "[cursorObject, 'locks', 20] call PHX_fnc_houseUpgrade";
        description = "Increases time to boltcut by 20%.";
        price = 300000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayDynamicGroups\Lock.paa";
    };

	class Titanium_Locks_3 {
        title = "Titanium Locks Level 3";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 0) isEqualTo 20";
        action = "[cursorObject, 'locks',30] call PHX_fnc_houseUpgrade";
        description = "Increases time to boltcut by 30%.";
        level = 3;
        price = 675000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayDynamicGroups\Lock.paa";
    };

	class Titanium_Locks_4 {
        title = "Titanium Locks Level 4";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 0) isEqualTo 30"; 
        action = "[cursorObject, 'locks', 40] call PHX_fnc_houseUpgrade";
        description = "Increases time to boltcut by 40%.";
        price = 1100000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayDynamicGroups\Lock.paa";
    };

	class Titanium_Locks_5 {
        title = "Titanium Locks Level 5";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 0) isEqualTo 40";
        action = "[cursorObject, 'locks', 50] call PHX_fnc_houseUpgrade";
        description = "Increases time to boltcut by 50%.";
        price = 2000000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayDynamicGroups\Lock.paa";
    };

	class Category_1 {
        title = "Category Upgrade Level 1";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 1) isEqualTo 0";
        action = "[cursorObject, 'category', 100] call PHX_fnc_houseUpgrade";
        description = "Increases category space to 1100.";
        level = 1;
        price = 150000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
    };

	class Category_2 {
        title = "Category Upgrade Level 2";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 1) isEqualTo 100";
        action = "[cursorObject, 'category', 250] call PHX_fnc_houseUpgrade";
        description = "Increases category space to 1250.";
        price = 285000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
    };

	class Category_3 {
        title = "Category Upgrade Level 3";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 1) isEqualTo 250";
        action = "[cursorObject, 'category', 400] call PHX_fnc_houseUpgrade";
        description = "Increases category space to 1400.";
        price = 700000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
    };

	class Category_4 {
        title = "Category Upgrade Level 4";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 1) isEqualTo 400";
        action = "[cursorObject, 'category', 650] call PHX_fnc_houseUpgrade";
        description = "Increases category space to 1650";
        price = 1250000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
    };

	class Category_5 {
        title = "Category Upgrade Level 5";
        condition = "((cursorObject getVariable ['house_upgrades',[]]) select 1) isEqualTo 650";
        action = "[cursorObject, 'category', 1000] call PHX_fnc_houseUpgrade";
        description = "Increases category space to 2000.";
        price = 1750000;
        icon = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
    };
};
