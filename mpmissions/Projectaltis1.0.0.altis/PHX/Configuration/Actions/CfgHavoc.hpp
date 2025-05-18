/*
	@File: CfgHAV.hpp
	@Author: Jack "Scarso" Farhall & Lewis Mackinnon
	@Description: Configures the contents of all map inits.
*/

// General Stores
class havocGeneral {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Item Market", "life_fnc_virt_menu", "hav_market", "playerSide isEqualTo east", 5 },
		{ "<t color='#274e13'>[CSAT]</t> Command Market", "life_fnc_virt_menu", "havoc_command_market", "playerSide isEqualTo east && call life_havoclevel >= 6", 5 },
		{ "<t color='#274e13'>[CSAT]</t> Clothing Store", "life_fnc_clothingMenu", "havoc_clothing", "playerSide isEqualTo east", 5 },
		{ "<t color='#274e13'>[CSAT]</t> Equipment Store", "life_fnc_weaponShopMenu", "havoc_general_store", "playerSide isEqualTo east", 5 },
		// { "<t color='#274e13'>[CSAT]</t> Get Patrol Mission", "PHX_fnc_getPatrol", "", "playerSide isEqualTo east && { !PHX_DoingMission }", 5 },
		{ "<t color='#ADFF2F'>[ATM]</t> Cashpoint", "PHX_fnc_atmMenu", "", "playerSide isEqualTo east", 5 }
	};
};
class havocHSS {
	actions[] = {
		{ "<t color='#000000'>[HSS]</t> License Store", "PHX_fnc_openLicenses", {"rebel","PMC"}, "player getVariable ['isHSS', false]", 5 },
		{ "<t color='#000000'>[HSS]</t> Rebel Market", "life_fnc_virt_menu", "rebel_market", "player getVariable ['isHSS', false]", 5 },
		{ "<t color='#000000'>[HSS]</t> Rebel Clothing", "life_fnc_clothingMenu", "rebel_store", "player getVariable ['isHSS', false]", 5 },
		{ "<t color='#000000'>[HSS]</t> Basic Rebel Equipment", "life_fnc_weaponShopMenu", "basic_rebel", "player getVariable ['isHSS', false]", 5 },
		{ "<t color='#000000'>[HSS]</t> Advanced Rebel Equipment", "life_fnc_weaponShopMenu", "advanced_rebel", "player getVariable ['isHSS', false]", 5 },
		{ "<t color='#ADFF2F'>[ATM]</t> Cashpoint", "PHX_fnc_atmMenu", "", "player getVariable ['isHSS', false]", 5 }
	};
};

class havLoadout {
	actions[] = {
		{ "<t color='#000000'>[CSAT]</t> Restore Default Loadout", "PHX_fnc_havLoadout", "", "playerSide isEqualTo east", 5 }
	};
};
class havocHSSveh {
	actions[] = {
		{ "<t color='#000000'>[HSS]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"rebel_dealership","civilian",{"hss_car_spawn"},"reb","Vehicle Store"}, "(player getVariable ['isHSS', false])", 5 }
	};
};

// Vehicle Stores
class havocCar {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_ground_store","east",{"csat_car"},"csat","Vehicle Store"}, "playerSide isEqualTo east", 5 }
	};
};
class havocCar_Krichev {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_ground_store","east",{"csat_car_Krichev"},"csat","Vehicle Store"}, "playerSide isEqualTo east", 5 }
	};
};
class havocCar_Tambov {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_ground_store","east",{"csat_car_Tambov"},"csat","Vehicle Store"}, "playerSide isEqualTo east", 5 }
	};
};
class havocCar_Kubinka {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_ground_store","east",{"csat_car_Kubinka"},"csat","Vehicle Store"}, "playerSide isEqualTo east", 5 }
	};
};
class havocCar_Magos {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_ground_store","east",{"csat_car_Magos"},"csat","Vehicle Store"}, "playerSide isEqualTo east", 5 }
	};
};
class havocCar_Viper {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_ground_store","east",{"csat_car_Viper"},"csat","Vehicle Store"}, "playerSide isEqualTo east", 5 }
	};
};
class havocAir {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_air_store","east",{"csat_air"},"csat","Vehicle Store"}, "playerSide isEqualTo east && call life_havoclevel >= 1", 5 }
	};
};
class havocAirUnits {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_air_store","east",{"csat_air_camp"},"havoc","Vehicle Store"}, "playerSide isEqualTo east && call life_havoclevel >= 1", 5 }
	};
};
class havocAirViper {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_air_store","east",{"csat_air_viper"},"havoc","Vehicle Store"}, "playerSide isEqualTo east && call life_havoclevel >= 1", 5 }
	};
};
class havocAirCheckpoint {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_air_store","east",{"havoc_cp_air_spawn_1"},"havoc","Vehicle Store"}, "playerSide isEqualTo east && call life_hadlevel >= 1", 5 }
	};
};
class havocSeaPyrgos {
	actions[] = {
		{ "<t color='#274e13'>[CSAT]</t> Vehicle Store", "life_fnc_vehicleShopMenu", {"havoc_sea_store","east",{"havoc_cp_sea_spawn_1","havoc_cp_sea_spawn_2"},"havoc","Vehicle Store"}, "playerSide isEqualTo east && call life_hmulevel >= 1", 5 }
	};
};
