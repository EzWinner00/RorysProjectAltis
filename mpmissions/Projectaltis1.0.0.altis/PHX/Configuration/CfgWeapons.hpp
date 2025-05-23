/*
    @File: CfgWeapons.hpp
    @Author : Lewis Mackinnon
    @Description : Configures the weapon stores.
*/

class CfgWeapons {
    cartMax = 50;

    class Altis {
        class general_store {
            name = "General Store";
            conditions = "true";
            defaultTab = "items";
            weps[] = {};
            mags[] = {};
            accs[] = {};
            items[] = {
                { "ItemMap", "Map of Altis", 120, 120, "true" },
                { "ItemGPS", "Handheld GPS", 10000, 1250, "true" },
                { "ItemRadio", "Mobile Phone", 190, 190, "true" },
                { "ItemCompass", "Compass", 45, 23, "true" },
                { "ItemWatch", "Wrist Watch", 60, 30, "true" },
                { "Binocular", "Binoculars", 270, 135, "true" },
                { "Rangefinder", "Rangefinder", 1200, 600, "true" },
                { "NVGoggles", "Night Vision Goggles", 5000, 0, "true" },
                { "ToolKit", "Toolkit", 1500, 750, "true" }
            };
        };

        class fuel_station_Store {
            name = "Fuel Station Store";
            conditions = "true";
            defaultTab = "items";
            weps[] = {};
            mags[] = {};
            accs[] = {};
            items[] = {
                { "ItemMap", "Map of Altis", 120, 120, "true" },
                { "ItemGPS", "Handheld GPS", 10000, 1250, "true" },
                { "ItemRadio", "Mobile Phone", 190, 190, "true" },
                { "ItemCompass", "Compass", 45, 23, "true" },
                { "ItemWatch", "Wrist Watch", 60, 30, "true" },
                { "ToolKit", "Toolkit", 1500, 750, "true" }
            };
        };

        class go_karting_store {
            name = "Go-Karting Store";
            conditions = "(playerSide isEqualTo civilian && license_civ_karting) || { (player getVariable ['isCID', false]) || (player getVariable ['isHSS', false])}";
            defaultTab = "weps";
            weps[] = {
                { "hgun_Pistol_Signal_F", "Starter Pistol", 6000, 3000, "true" }
            };
            mags[] = {
                { "6Rnd_GreenSignal_F", "6Rnd Green Single Mag", 70, 35, "true" },
                { "6Rnd_RedSignal_F", "6Rnd Red Single Mag", 70, 35, "true" }
            };
            accs[] = {};
            items[] = {
                { "ToolKit", "Toolkit", 1500, 750, "true" }
            };
        };

        class handgun_store {
            name = "Handgun Store";
            conditions = "(playerSide isEqualTo civilian && license_civ_gun) || { (player getVariable ['isCID', false]) || (player getVariable ['isHSS', false])}";
            defaultTab = "weps";
            weps[] = {
                { "hgun_Pistol_01_F", "PM 9mm", 17000, 4000, "true" },
                { "hgun_Rook40_F", "Rook-40 9mm", 22400, 5800, "true" },
                { "hgun_P07_F", "P07 9mm", 20800, 6400, "true" },
                { "hgun_ACPC2_F", "ACP-C2 .45 ACP", 12750, 7000, "true" },
                { "hgun_Pistol_heavy_02_F", "Zubr .45 ACP", 10500, 7750, "true" }
            };
            mags[] = {
                { "10Rnd_9x21_Mag", "10Rnd 9mm Mag", 500, 50, "true" },
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 800, 100, "true" },
                { "9Rnd_45ACP_Mag", "9Rnd .45mm Mag", 250, 100, "true" },
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 200, 150, "true" }
            };
            accs[] = {};
            items[] = {};
        };

        class smg_store {
            name = "SMG Store";
            conditions = "(playerSide isEqualTo civilian && license_civ_SMG) || { (player getVariable ['isCID', false]) || (player getVariable ['isHSS', false])}";
            defaultTab = "weps";
            weps[] = {
                { "hgun_PDW2000_F", "PDW2000 9mm", 37750, 20000, "true" },
                { "SMG_05_F", "Protector 9mm", 44000, 22000, "true" },
                { "SMG_02_F", "Sting 9mm", 45000, 22000, "true" },
                { "SMG_01_F", "Vermin .45 ACP", 48000, 24000, "true" }
            };
            mags[] = {
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 1500, 100, "true" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 2400, 200, "true" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 2400, 200, "true" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP ACP Mag", 2000, 300, "true" }
            };
            accs[] = {};
            items[] = {};
        };

        class so1_equipment {
            name = "SO1 Equipment";
            conditions = "playerSide isEqualTo civilian && license_civ_so1";
            defaultTab = "weps";
            weps[] = {
                // Pistols
                { "hgun_Pistol_heavy_01_F", "Taser Pistol", 0, 0, "true" },
                { "hgun_Pistol_01_F", "PM 9mm", 5000, 2500, "true" },
                { "hgun_Rook40_F", "Rook-40 9mm", 5000, 2500, "true" },
                { "hgun_ACPC2_F", "ACP-C2 .45 ACP", 5000, 2500, "true" },
                { "hgun_Pistol_heavy_02_F", "Zubr .45 ACP", 5000, 2500, "true" },
                // Sub-Machine Guns
                { "SMG_05_F", "Protector 9mm", 20000, 10000, "true" },
                { "SMG_01_F", "Vermin .45 ACP", 40000, 20000, "true" },
                { "SMG_03C_TR_black", "ADR-97C TR 5.7mm", 40000, 20000, "true" },
                { "SMG_03C_black", "ADR-97C 5.7mm", 40000, 20000, "true" },
                { "SMG_03_TR_black", "ADR-97 TR 5.7mm", 40000, 20000, "true" },
                { "SMG_03_black", "ADR-97 5.7mm", 40000, 20000, "true" },
                // Assault Rifles
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm", 50000, 25000, "true" },
                { "arifle_MXC_Black_F", "MXC 6.5mm", 70000, 35000, "true" },
                { "arifle_MX_Black_F", "MX 6.5mm", 80000, 40000, "true" },
                { "arifle_MXM_Black_F", "MXM 6.5mm", 90000, 45000, "true" },
                { "arifle_MSBS65_black_F", "Promet 6.5mm", 95000, 47500, "true" },
                { "arifle_MSBS65_Mark_black_F", "Promet MR 6.5mm", 95000, 47500, "true" },
                { "arifle_ARX_blk_F", "Type-115 6.5mm", 100000, 50000, "true" },
                // Light Machine Guns
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm", 200000, 100000, "true" },
                { "arifle_ARX_blk_F", "MX SW 6.5mm", 300000, 150000, "true" }
            };
            mags[] = {
                { "11Rnd_45ACP_Mag", "Taser Cartridge", 0, 0, "true" },
                { "10Rnd_9x21_Mag", "10Rnd 9mm Mag", 100, 50, "true" },
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 200, 100, "true" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 400, 200, "true" },
                { "9Rnd_45ACP_Mag", "9Rnd .45mm Mag", 200, 100, "true" },
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 300, 150, "true" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 700, 350, "true" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 600, 300, "true" },
                { "30Rnd_65x39_caseless_mag", "30Rnd 6.5mm Mag", 800, 400, "true" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 850, 425, "true" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 850, 425, "true" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 1000, 500, "true" },
                { "100Rnd_65x39_caseless_black_mag", "100Rnd 6.5mm Mag", 2000, 1000, "true" }
            };
            accs[] = {
                { "optic_MRD", "MRD", 0, 0, "true" },
                { "optic_Aco", "ACO (Red)", 100, 50, "true" },
                { "optic_ACO_grn", "ACO (Green)", 100, 50, "true" },
                { "optic_Aco_smg", "ACO SMG (Red)", 100, 50, "true" },
                { "optic_ACO_grn_smg", "ACO SMG (Green)", 100, 50, "true" },
                { "optic_Holosight_blk_F", "Mk17 Holosight (Black)", 120, 60, "true" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG (Black)", 120, 60, "true" },
                { "optic_Hamr", "RCO", 150, 75, "true" },
                { "optic_MRCO", "MRCO", 180, 90, "true" },
                { "optic_Arco_blk_F", "ARCO (Black)", 180, 90, "true" },
                { "optic_ERCO_blk_F", "ERCO (Black)", 200, 100, "true" },
                { "acc_flashlight_pistol",  "Pistol Flashlight", 40, 20, "true" },
                { "acc_flashlight", "Flashlight", 50, 25, "true" },
                { "acc_pointer_IR", "IR Pointer", 80, 45, "true" },
                { "muzzle_snds_acp", ".45 Suppressor", 1000, 500, "true" },
                { "muzzle_snds_L", "9mm Suppressor", 1400, 700, "true" },
                { "muzzle_snds_M", "5.56mm Suppressor", 1800, 900, "true" },
                { "muzzle_snds_570", "5.7mm Suppressor", 5000, 2500, "true" },
                { "muzzle_snds_H", "6.5mm Suppressor", 10000, 5000, "true" },
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth) Suppressor", 16000, 8000, "true" },
                { "bipod_01_F_blk", "Bipod", 300, 150, "true" }
            };
            items[] = {
                { "ItemMap", "Map of Altis", 120, 120, "true" },
                { "ItemGPS", "Handheld GPS", 10000, 1250, "true" },
                { "ItemRadio", "Mobile Phone", 190, 190, "true" },
                { "ItemCompass", "Compass", 45, 23, "true" },
                { "ItemWatch", "Wrist Watch", 60, 30, "true" },
                { "Binocular", "Binoculars", 270, 135, "true" },
                { "Rangefinder", "Rangefinder", 1200, 600, "true" },
                { "NVGoggles", "Night Vision Goggles", 5000, 0, "true" },
                { "ToolKit", "Toolkit", 1500, 750, "true" }
            };
        };

        class basic_rebel {
            name = "Basic Rebel";
            conditions = "(playerSide isEqualTo civilian && license_civ_rebel) || { (player getVariable ['isCID', false]) || (player getVariable ['isHSS', false])}";
            defaultTab = "weps";
            weps[] = {
                // Pistols
                { "hgun_Pistol_01_F", "PM 9mm", 16000, 4000, "true" },
                { "hgun_Rook40_F", "Rook-40 9mm", 22400, 5800, "true" },
                { "hgun_P07_F", "P07 9mm", 12800, 20000, "true" },
                { "hgun_ACPC2_F", "ACP-C2 .45 ACP", 14000, 7000, "true" },
                { "hgun_Pistol_heavy_02_F", "Zubr .45 ACP", 15500, 7750, "true" },
                // Sub-Machine Guns
                { "hgun_PDW2000_F", "PDW2000 9mm", 40000, 20000, "true" },
                { "SMG_05_F", "Protector 9mm", 44000, 22000, "true" },
                { "SMG_02_F", "Sting 9mm", 45000, 22000, "true" },
                { "SMG_01_F", "Vermin .45 ACP", 48000, 24000, "true" },
                { "SMG_03C_black", "ADR-97C 5.7mm (Black)", 64000, 32000, "PHX_DonatorLevel > 0" },
                { "SMG_03C_khaki", "ADR-97C 5.7mm (Khaki)", 64000, 32000, "true" },
                { "SMG_03C_hex", "ADR-97C 5.7mm (Hex)", 64000, 32000, "true" },
                { "SMG_03C_camo", "ADR-97C 5.7mm (Camo)", 64000, 32000, "true" },
                { "SMG_03_black", "ADR-97 5.7mm (Black)", 68000, 34000, "PHX_DonatorLevel > 0" },
                { "SMG_03_khaki", "ADR-97 5.7mm (Khaki)", 68000, 34000, "true" },
                { "SMG_03_hex", "ADR-97 5.7mm (Hex)", 68000, 34000, "true" },
                { "SMG_03_camo", "ADR-97 5.7mm (Camo)", 68000, 34000, "true" },
                { "SMG_03C_TR_black", "ADR-97C TR 5.7mm (Black)", 72000, 36000, "PHX_DonatorLevel > 0" },
                { "SMG_03C_TR_khaki", "ADR-97C TR 5.7mm (Khaki)", 72000, 36000, "true" },
                { "SMG_03C_TR_hex", "ADR-97C TR 5.7mm (Hex)", 72000, 36000, "true" },
                { "SMG_03C_TR_camo", "ADR-97C TR 5.7mm (Camo)", 72000, 36000, "true" },
                { "SMG_03_TR_black", "ADR-97 TR 5.7mm (Black)", 76000, 38000, "PHX_DonatorLevel > 0" },
                { "SMG_03_TR_khaki", "ADR-97 TR 5.7mm (Khaki)", 76000, 38000, "true" },
                { "SMG_03_TR_hex", "ADR-97 TR 5.7mm (Hex)", 76000, 38000, "true" },
                { "SMG_03_TR_camo", "ADR-97 TR 5.7mm (Camo)", 76000, 38000, "true" },
                // Assault Rifles
                { "arifle_SDAR_F", "SDAR 5.56mm", 65000, 15000, "true" },
                { "arifle_AKS_F", "AKS-74U 5.45mm", 65250, 17500, "true" },
                { "arifle_Mk20C_F", "Mk20C 5.56mm", 70250, 32000, "true" },
                { "arifle_Mk20_F", "Mk20 5.56mm", 76000, 34000, "true" },
                { "arifle_TRG20_F", "TRG-20 5.56mm", 70500, 32000, "true" },
                { "arifle_TRG21_F", "TRG-21 5.56mm", 78000, 34000, "true" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 88000, 36000, "PHX_DonatorLevel > 0" },
                { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 88000, 36000, "true" },
                { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 88000, 36000, "true" },
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm (Black)", 105000, 36000, "PHX_DonatorLevel > 0" },
                { "arifle_CTAR_hex_F", "CAR-95 5.8mm (Hex)", 105000, 36000, "true" },
                { "arifle_CTAR_ghex_F", "CAR-95 5.8mm (Green Hex)", 72000, 36000, "true" },
                { "arifle_Katiba_F", "Katiba 6.5mm", 125000, 48000, "true" },
                { "arifle_Katiba_GL_F", "Katiba GL 6.5mm", 280000, 52000, "true" },
                { "arifle_MXC_Black_F", "MXC 6.5mm (Black)", 105000, 46000, "PHX_DonatorLevel > 0" },
                { "arifle_MXC_F", "MXC 6.5mm (Sand)", 105000, 46000, "true" },
                { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 105000, 46000, "true" },
                { "arifle_MX_Black_F", "MX 6.5mm (Black)", 110000, 48000, "PHX_DonatorLevel > 0" },
                { "arifle_MX_F", "MX 6.5mm (Sand)", 110000, 48000, "true" },
                { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 110000, 48000, "true" },
                { "arifle_MX_GL_F", "MX 3GL 6.5mm (Sand)", 280000, 52000, "true" },
                { "arifle_ARX_blk_F", "Type-115 6.5mm (Black)", 145000, 65000, "PHX_DonatorLevel > 0" },
                { "arifle_ARX_hex_F", "Type-115 6.5mm (Hex)", 145000, 65000, "true" },
                { "arifle_ARX_ghex_F", "Type-115 6.5mm (Green Hex)", 145000, 65000, "true" },
                { "arifle_MSBS65_black_F", "Promet 6.5mm (Black)", 150650, 75000, "PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_F", "Promet 6.5mm (Green)", 150650, 75000, "true" },
                { "arifle_MSBS65_camo_F", "Promet 6.5mm (Camo)", 150650, 75000, "true" },
                { "arifle_MSBS65_sand_F", "Promet 6.5mm (Sand)", 150650, 75000, "true" },
                { "arifle_MSBS65_GL_black_F", "Promet GL 6.5mm (Black)", 310500, 80000, "PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_GL_sand_F", "Promet GL 6.5mm (Sand)", 310500, 80000, "true" },
                { "arifle_MSBS65_GL_camo_F", "Promet GL 6.5mm (Camo)", 310500, 80000, "true" },
                // Light Machine Guns
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm (Black)", 175600, 70000, "PHX_DonatorLevel > 0" },
                { "arifle_SPAR_02_snd_F", "SPAR-16S 5.56mm (Sand)", 175600, 70000, "true" },
                { "arifle_SPAR_02_khk_F", "SPAR-16S 5.56mm (Khaki)", 175600, 70000, "true" },
                { "arifle_CTARS_blk_F", "CAR-95-1 5.8mm (Black)", 225000, 80000, "PHX_DonatorLevel > 0" },
                { "arifle_CTARS_hex_F", "CAR-95-1 5.8mm (Hex)", 225000, 80000, "true" },
                { "arifle_CTARS_ghex_F", "CAR-95-1 5.8mm (Green Hex)", 225000, 80000, "true" },
                // Shotguns
                { "sgun_HunterShotgun_01_sawedoff_F", "Kozlice 12G (Sawn-Off)", 65750, 50000, "true" },
                { "sgun_HunterShotgun_01_F", "Kozlice 12G", 95000, 65000, "true" },
                // Marksman Rifles
                { "arifle_MXM_Black_F", "MXM 6.5mm (Black)", 260000, 95000, "PHX_DonatorLevel > 0" },
                { "arifle_MXM_F", "MXM 6.5mm (Sand)", 260000, 95000, "true" },
                { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 260000, 95000, "true" },
                { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 250750, 55000, "PHX_DonatorLevel > 0" },
                { "srifle_DMR_07_hex_F", "CMR-76 6.5mm (Hex)", 250750, 55000, "true" },
                { "srifle_DMR_06_hunter_F", "Mk14 7.62mm (Classic)", 310800, 150000, "true" },
                { "srifle_DMR_01_F", "Rahim 7.62mm", 290250, 135000, "true" }
            };
            mags[] = {
                { "10Rnd_9x21_Mag", "10Rnd 9mm Mag", 100, 50, "true" },
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 200, 100, "true" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 400, 200, "true" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 450, 225, "true" },
                { "9Rnd_45ACP_Mag", "9Rnd .45mm Mag", 200, 100, "true" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP ACP Mag", 600, 300, "true" },
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 300, 150, "true" },
                { "30Rnd_545x39_Mag_F", "30Rnd 5.45mm Mag", 1000, 650, "true" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 1400, 675, "true" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 1250, 600, "true" },
                { "20Rnd_556x45_UW_mag", "20Rnd 5.56mm UW Mag", 1750, 1000, "true" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 600, 300, "true" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 1450, 700, "true" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 1350, 700, "true" },
                { "30Rnd_65x39_caseless_mag", "30Rnd 6.5mm Mag", 1550, 1000, "true" },
                { "20Rnd_650x39_Cased_Mag_F", "20Rnd 6.5mm Mag", 1400, 650, "true" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 6000, 4250, "true" },
                { "100Rnd_580x42_Mag_F", "100Rnd 5.8mm Mag", 5000, 3350, "true" },
                { "10Rnd_762x54_Mag", "10Rnd 7.62mm Mag", 3600, 2050, "true" },
                { "2Rnd_12Gauge_Slug", "12G (Slug)", 1200, 600, "true" },
                { "2Rnd_12Gauge_Pellets", "12G (Pellets)", 1200, 600, "true" }
            };
            accs[] = {
                { "optic_Aco", "ACO (Red)", 7000, 5600, "true" },
                { "optic_ACO_grn", "ACO (Green)", 7000, 5600, "true" },
                { "optic_Aco_smg", "ACO SMG (Red)", 7000, 5600, "true" },
                { "optic_ACO_grn_smg", "ACO SMG (Green)", 7000, 5600, "true" },
                { "optic_Holosight_blk_F", "Mk17 Holosight (Black)", 7250, 5600, "PHX_DonatorLevel > 0" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG (Black)", 7250, 5600, "PHX_DonatorLevel > 0" },
                { "optic_Holosight", "Mk17 Holosight", 7250, 5600, "true" },
                { "optic_Holosight_smg", "Mk17 Holosight SMG", 7250, 5600, "true" },
                { "optic_Holosight_khk_F", "Mk17 Holosight (Khaki)", 7250, 5600, "true" },
                { "optic_Holosight_smg_khk_F", "Mk17 Holosight SMG (Khaki)", 7250, 5600, "true" },
                { "optic_Hamr", "RCO (Black)", 12000, 7500, "true" },
                { "optic_Hamr_khk_F", "RCO (Khaki)", 12000, 7500, "true" },
                { "optic_MRCO", "MRCO", 12250, 7500, "true" },
                { "optic_Arco_blk_F", "ARCO (Black)", 12250, 7500, "PHX_DonatorLevel > 0" },
                { "optic_Arco", "ARCO (Brown)", 12250, 7500, "true" },
                { "optic_Arco_arid_F", "ARCO (Arid)", 12250, 7500, "true" },
                { "optic_Arco_lush_F", "ARCO (Lush)", 12250, 7500, "true" },
                { "optic_Arco_ghex_F", "ARCO (Green Hex)", 12250, 7500, "true" },
                { "optic_ERCO_blk_F", "ERCO (Black)", 12250, 7500, "PHX_DonatorLevel > 0" },
                { "optic_ERCO_khk_F", "ERCO (Khaki)", 12250, 7500, "true" },
                { "optic_ERCO_snd_F", "ERCO (Sand)", 12250, 7500, "true" },
                { "optic_DMS", "DMS", 350000, 85000, "true" },
                { "acc_flashlight", "Flashlight", 50, 25, "true" },
                { "acc_pointer_IR", "IR Pointer", 80, 45, "true" },
                { "muzzle_snds_acp", ".45 Suppressor", 10000, 500, "true" },
                { "muzzle_snds_L", "9mm Suppressor", 14000, 700, "true" },
                { "muzzle_snds_M", "5.56mm Suppressor (Black)", 100000, 2500, "true" },
                { "muzzle_snds_m_khk_F", "5.56mm Suppressor (Khaki)", 100000, 2500, "true" },
                { "muzzle_snds_m_snd_F", "5.56mm Suppressor (Sand)", 100000, 2500, "true" },
                { "muzzle_snds_570", "5.7mm Suppressor", 95000, 2500, "true" },
                { "muzzle_snds_58_blk_F", "5.8mm Suppressor (Black)", 115000, 3000, "PHX_DonatorLevel > 0" },
                { "muzzle_snds_58_hex_F", "5.8mm Suppressor (Hex)", 115000, 3000, "true" },
                { "muzzle_snds_58_ghex_F", "5.8mm Suppressor (Green Hex)", 115000, 3000, "true" },
                { "muzzle_snds_H", "Sound Suppressor (6.5 mm)", 145000, 5000, "true" },
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth) Suppressor (Black)", 145000, 8000, "PHX_DonatorLevel > 0" },
                { "muzzle_snds_65_TI_hex_F", "6.5mm (Stealth) Suppressor (Hex)", 145000, 8000, "true" },
                { "muzzle_snds_65_TI_ghex_F", "6.5mm (Stealth) Suppressor (Green Hex)", 145000, 8000, "true" },
                { "bipod_01_F_blk", "Bipod (Black)", 25000, 150, "PHX_DonatorLevel > 0" },
                { "bipod_01_F_khk", "Bipod (Khaki)" , 25000, 150, "true" },
                { "bipod_01_F_mtp", "Bipod (MTP)", 25000, 150, "true" },
                { "bipod_01_F_snd", "Bipod (Sand)", 25000, 150, "true" },
                { "bipod_02_F_arid", "Bipod (Arid)", 25000, 150, "true" },
                { "bipod_02_F_blk", "Bipod (Black)", 25000, 150, "PHX_DonatorLevel > 0" },
                { "bipod_02_F_hex", "Bipod (Hex)", 25000, 150, "true" },
                { "bipod_02_F_lush", "Bipod (Lush)", 25000, 150, "true" },
                { "bipod_02_F_tan", "Bipod (Brown)", 25000, 150, "true" }
            };
            items[] = {
                { "ItemMap", "Map of Altis", 120, 120, "true" },
                { "ItemGPS", "Handheld GPS", 500, 1250, "true" },
                { "ItemRadio", "Mobile Phone", 190, 190, "true" },
                { "ItemCompass", "Compass", 45, 23, "true" },
                { "ItemWatch", "Wrist Watch", 60, 30, "true" },
                { "Binocular", "Binoculars", 270, 135, "true" },
                { "Rangefinder", "Rangefinder", 15000, 2000, "true" },
                { "NVGoggles", "Night Vision Goggles", 22750, 0, "true" },
                { "ToolKit", "Toolkit", 8500, 750, "true" }
            };
        };

        class advanced_rebel {
            name = "Advanced Rebel";
            conditions = "(playerSide isEqualTo civilian && (license_civ_rebel || license_civ_PMC)) || { (player getVariable ['isCID', false]) || (player getVariable ['isHSS', false])}";
            defaultTab = "weps";
            weps[] = {
                // Pistols
                { "hgun_Pistol_01_F", "PM 9mm", 8000, 4000, "true" },
                { "hgun_Rook40_F", "Rook-40 9mm", 11600, 5800, "true" },
                { "hgun_P07_F", "P07 9mm", 12800, 6400, "true" },
                { "hgun_ACPC2_F", "ACP-C2 .45 ACP", 14000, 7000, "true" },
                { "hgun_Pistol_heavy_02_F", "Zubr .45 ACP", 15500, 7750, "true" },
                // Sub-Machine Guns
                { "hgun_PDW2000_F", "PDW2000 9mm", 40000, 20000, "true" },
                { "SMG_05_F", "Protector 9mm", 44000, 22000, "true" },
                { "SMG_02_F", "Sting 9mm", 44000, 22000, "true" },
                { "SMG_01_F", "Vermin .45 ACP", 48000, 24000, "true" },
                { "SMG_03C_black", "ADR-97C 5.7mm (Black)", 64000, 32000, "PHX_DonatorLevel > 0" },
                { "SMG_03C_khaki", "ADR-97C 5.7mm (Khaki)", 64000, 32000, "true" },
                { "SMG_03C_hex", "ADR-97C 5.7mm (Hex)", 64000, 32000, "true" },
                { "SMG_03C_camo", "ADR-97C 5.7mm (Camo)", 64000, 32000, "true" },
                { "SMG_03_black", "ADR-97 5.7mm (Black)", 68000, 34000, "PHX_DonatorLevel > 0" },
                { "SMG_03_khaki", "ADR-97 5.7mm (Khaki)", 68000, 34000, "true" },
                { "SMG_03_hex", "ADR-97 5.7mm (Hex)", 68000, 34000, "true" },
                { "SMG_03_camo", "ADR-97 5.7mm (Camo)", 68000, 34000, "true" },
                { "SMG_03C_TR_black", "ADR-97C TR 5.7mm (Black)", 72000, 36000, "PHX_DonatorLevel > 0" },
                { "SMG_03C_TR_khaki", "ADR-97C TR 5.7mm (Khaki)", 72000, 36000, "true" },
                { "SMG_03C_TR_hex", "ADR-97C TR 5.7mm (Hex)", 72000, 36000, "true" },
                { "SMG_03C_TR_camo", "ADR-97C TR 5.7mm (Camo)", 72000, 36000, "true" },
                { "SMG_03_TR_black", "ADR-97 TR 5.7mm (Black)", 76000, 38000, "PHX_DonatorLevel > 0" },
                { "SMG_03_TR_khaki", "ADR-97 TR 5.7mm (Khaki)", 76000, 38000, "true" },
                { "SMG_03_TR_hex", "ADR-97 TR 5.7mm (Hex)", 76000, 38000, "true" },
                { "SMG_03_TR_camo", "ADR-97 TR 5.7mm (Camo)", 76000, 38000, "true" },
                // Assault Rifles
                { "arifle_SDAR_F", "SDAR 5.56mm", 65000, 15000, "true" },
                { "arifle_AKS_F", "AKS-74U 5.45mm", 65250, 17500, "true" },
                { "arifle_Mk20C_F", "Mk20C 5.56mm", 70250, 32000, "true" },
                { "arifle_Mk20_F", "Mk20 5.56mm", 76000, 34000, "true" },
                { "arifle_TRG20_F", "TRG-20 5.56mm", 70500, 32000, "true" },
                { "arifle_TRG21_F", "TRG-21 5.56mm", 78000, 34000, "true" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 88000, 36000, "PHX_DonatorLevel > 0" },
                { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 88000, 36000, "true" },
                { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 88000, 36000, "true" },
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm (Black)", 105000, 36000, "PHX_DonatorLevel > 0" },
                { "arifle_CTAR_hex_F", "CAR-95 5.8mm (Hex)", 105000, 36000, "true" },
                { "arifle_CTAR_ghex_F", "CAR-95 5.8mm (Green Hex)", 105000, 36000, "true" },
                { "arifle_Katiba_F", "Katiba 6.5mm", 125000, 48000, "true" },
                { "arifle_Katiba_GL_F", "Katiba GL 6.5mm", 200000, 52000, "true" },
                { "arifle_MXC_Black_F", "MXC 6.5mm (Black)", 105000, 46000, "PHX_DonatorLevel > 0" },
                { "arifle_MXC_F", "MXC 6.5mm (Sand)", 105000, 46000, "true" },
                { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 105000, 46000, "true" },
                { "arifle_MX_Black_F", "MX 6.5mm (Black)", 110000, 48000, "PHX_DonatorLevel > 0" },
                { "arifle_MX_F", "MX 6.5mm (Sand)", 110000, 48000, "true" },
                { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 110000, 48000, "true" },
                { "arifle_MX_GL_F", "MX 3GL 6.5mm (Sand)", 200000, 52000, "true" },
                { "arifle_ARX_blk_F", "Type-115 6.5mm (Black)", 145000, 65000, "PHX_DonatorLevel > 0" },
                { "arifle_ARX_hex_F", "Type-115 6.5mm (Hex)", 145000, 65000, "true" },
                { "arifle_ARX_ghex_F", "Type-115 6.5mm (Green Hex)", 130000, 65000, "true" },
                { "arifle_MSBS65_black_F", "Promet 6.5mm (Black)", 150650, 75000, "PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_F", "Promet 6.5mm (Green)", 150650, 75000, "true" },
                { "arifle_MSBS65_camo_F", "Promet 6.5mm (Camo)", 150650, 75000, "true" },
                { "arifle_MSBS65_sand_F", "Promet 6.5mm (Sand)", 150650, 75000, "true" },
                { "arifle_MSBS65_GL_black_F", "Promet GL 6.5mm (Black)", 160000, 80000, "PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_GL_sand_F", "Promet GL 6.5mm (Sand)", 160000, 80000, "true" },
                { "arifle_MSBS65_GL_camo_F", "Promet GL 6.5mm (Camo)", 160000, 80000, "true" },
                { "arifle_MSBS65_Mark_black_F", "Promet MR 6.5mm (Black)", 165000, 82500, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_Mark_F", "Promet MR 6.5mm (Green)", 165000, 82500, "license_civ_PMC" },
                { "arifle_MSBS65_Mark_camo_F", "Promet MR 6.5mm (Camo)", 165000, 82500, "license_civ_PMC" },
                { "arifle_MSBS65_Mark_sand_F", "Promet MR 6.5mm (Sand)", 165000, 82500, "license_civ_PMC" },
                { "arifle_MSBS65_UBS_black_F", "Promet SG 6.5mm (Black)", 175000, 90000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_UBS_F", "Promet SG 6.5mm (Green)", 175000, 90000, "license_civ_PMC" },
                { "arifle_MSBS65_UBS_camo_F", "Promet SG 6.5mm (Camo)", 175000, 90000, "license_civ_PMC" },
                { "arifle_MSBS65_UBS_sand_F", "Promet SG 6.5mm (Sand)", 175000, 90000, "license_civ_PMC" },
                { "arifle_AKM_F", "AKM 7.62mm", 185000, 75000, "license_civ_PMC" },
                { "arifle_AK12U_F", "AKU-12 7.62mm (Black)", 240000, 120000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "arifle_AK12U_arid_F", "AKU-12 7.62mm (Arid)", 240000, 120000, "license_civ_PMC" },
                { "arifle_AK12U_lush_F", "AKU-12 7.62mm (Lush)", 240000, 120000, "license_civ_PMC" },
                { "arifle_AK12_F", "AK-12 7.62mm (Black)", 250000, 125000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "arifle_AK12_arid_F", "AK-12 7.62mm (Arid)", 255000, 125000, "license_civ_PMC" },
                { "arifle_AK12_lush_F", "AK-12 7.62mm (Lush)", 255000, 125000, "license_civ_PMC" },

                // Light Machine Guns
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm (Black)", 165600, 70000, "PHX_DonatorLevel > 0" },
                { "arifle_SPAR_02_snd_F", "SPAR-16S 5.56mm (Sand)", 165600, 70000, "true" },
                { "arifle_SPAR_02_khk_F", "SPAR-16S 5.56mm (Khaki)", 165600, 70000, "true" },
                { "arifle_CTARS_blk_F", "CAR-95-1 5.8mm (Black)", 205000, 80000, "PHX_DonatorLevel > 0" },
                { "arifle_CTARS_hex_F", "CAR-95-1 5.8mm (Hex)", 205000, 80000, "true" },
                { "arifle_CTARS_ghex_F", "CAR-95-1 5.8mm (Green Hex)", 205000, 80000, "true" },
                { "arifle_MX_SW_Black_F", "MX-SW 6.5mm (Black)", 240500, 55000, "PHX_DonatorLevel > 0" },
                { "arifle_MX_SW_F", "MX-SW 6.5mm (Sand)", 240500, 55000, "true" },
                { "LMG_03_F", "LIM 5.56mm", 265000, 160000, "license_civ_PMC" },
                { "arifle_RPK12_F", "RPK 7.62mm (Black)", 385050, 175000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "arifle_RPK12_lush_F", "RPK 7.62mm (Lush)", 385050, 175000, "license_civ_PMC" },
                { "arifle_RPK12_arid_F", "RPK 7.62mm (Arid)", 385050, 175000, "license_civ_PMC" },
                { "LMG_Mk200_black_F", "Mk200 6.5mm", 505000, 300000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "LMG_Mk200_F", "Mk200 6.5mm", 505000, 300000, "license_civ_PMC" },
                // Shotguns
                { "sgun_HunterShotgun_01_sawedoff_F", "Kozlice 12G (Sawn-Off)", 65750, 40000, "true" },
                { "sgun_HunterShotgun_01_F", "Kozlice 12G", 95000, 50000, "true" },
                // Marksman Rifles
                { "arifle_MXM_Black_F", "MXM 6.5mm (Black)", 260000, 105000, "PHX_DonatorLevel > 0" },
                { "arifle_MXM_F", "MXM 6.5mm (Sand)", 260000, 105000, "true" },
                { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 260000, 105000, "true" },
                { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 210750, 105000, "PHX_DonatorLevel > 0" },
                { "srifle_DMR_07_hex_F", "CMR-76 6.5mm (Hex)", 210750, 105000, "true" },
                { "srifle_DMR_01_F", "Rahim 7.62mm", 290250, 210000, "true" },
                { "srifle_DMR_06_hunter_F", "Mk14 7.62mm (Classic)", 310800, 147500, "true" },
                { "srifle_DMR_06_olive_F", "Mk14 7.62mm (Olive)", 310800, 147500, "license_civ_PMC" },
                { "srifle_DMR_06_camo_F", "Mk14 7.62mm (Camo)", 310800, 147500, "license_civ_PMC" },
                { "arifle_SPAR_03_blk_F", "SPAR-17 7.62mm (Black)", 255000, 122500, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "arifle_SPAR_03_khk_F", "SPAR-17 7.62mm (Khaki)", 255000, 122500, "license_civ_PMC" },
                { "arifle_SPAR_03_snd_F", "SPAR-17 7.62mm (Sand)", 255000, 122500, "license_civ_PMC" },
                { "srifle_EBR_F", "Mk18 7.62mm", 305500, 130000, "license_civ_PMC" },
                { "srifle_DMR_03_F", "MkI 7.62mm (Black)", 350500, 140000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "srifle_DMR_03_khaki_F", "MkI 7.62mm (Khaki)", 350500, 140000, "license_civ_PMC" },
                { "srifle_DMR_03_tan_F", "MkI 7.62mm (Sand)", 350500, 140000, "license_civ_PMC" },
                { "srifle_DMR_03_multicam_F", "MkI 7.62mm (Multicam)", 350500, 140000, "license_civ_PMC" },
                { "srifle_DMR_03_woodland_F", "MkI 7.62mm (Woodland)", 350500, 140000, "license_civ_PMC" },
                { "srifle_DMR_04_DMS_weathered_Kir_F_F", "ASP-1 Kir (Black)", 800000, 460000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "srifle_DMR_04_Tan_F", "ASP-1 Kir (Tan)", 800000, 460000, "license_civ_PMC" }
            };
            mags[] = {
                { "10Rnd_9x21_Mag", "10Rnd 9mm Mag", 100, 50, "true" },
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 200, 100, "true" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 400, 200, "true" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 450, 225, "true" },
                { "9Rnd_45ACP_Mag", "9Rnd .45mm Mag", 200, 100, "true" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP ACP Mag", 600, 300, "true" },
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 300, 150, "true" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 3500, 375, "true" },
                { "30Rnd_545x39_Mag_F", "30Rnd 5.45mm Mag", 2000, 250, "true" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 1800, 300, "true" },
                { "20Rnd_556x45_UW_mag", "20Rnd 5.56mm UW Mag", 1800, 500, "true" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 600, 300, "true" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 800, 400, "true" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 800, 400, "true" },
                { "30Rnd_65x39_caseless_mag", "30Rnd 6.5mm Mag", 2000, 400, "true" },
                { "20Rnd_650x39_Cased_Mag_F", "20Rnd 6.5mm Mag", 2000, 350, "true" },
                { "10Rnd_762x54_Mag", "10Rnd 7.62mm Mag", 3800, 2000, "true" },
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 4500, 3000, "license_civ_PMC" },
                { "30Rnd_762x39_Mag_F", "30Rnd 7.62mm Mag (Black)", 5500, 2500, "license_civ_PMC" },
                { "30Rnd_762x39_AK12_Mag_F", "30Rnd 7.62mm Mag (Black)", 5500, 2500, "PHX_DonatorLevel > 0 && license_civ_PMC" },
                { "30rnd_762x39_AK12_Arid_Mag_F", "30Rnd 7.62mm Mag (Arid)", 5500, 2500, "license_civ_PMC" },
                { "30rnd_762x39_AK12_Lush_Mag_F", "30Rnd 7.62mm Mag (Lush)", 5500, 2500, "license_civ_PMC" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 4800, 1250, "true" },
                { "200Rnd_556x45_Box_F", "200Rnd 5.56mm Box", 5000, 2500, "license_civ_PMC" },
                { "100Rnd_580x42_Mag_F", "100Rnd 5.8mm Mag", 3900, 2000, "true" },
                { "100Rnd_65x39_caseless_black_mag", "6.5 mm 100Rnd Mag (Black)", 10000, 5000, "PHX_DonatorLevel > 0 && license_civ_PMC" },
                { "100Rnd_65x39_caseless_black_mag_tracer", "6.5 mm 100Rnd Tracer (Red) Mag (Black)", 10000, 5000, "PHX_DonatorLevel > 0 && license_civ_PMC" },
                { "100Rnd_65x39_caseless_mag", "6.5 mm 100Rnd Mag", 10000, 5000, "license_civ_PMC" },
                { "100Rnd_65x39_caseless_mag_Tracer", "6.5 mm 100Rnd Tracer (Red) Mag", 10000, 5000, "license_civ_PMC" },
                { "200Rnd_65x39_cased_Box", "200Rnd 6.5mm Box", 12500, 7250, "license_civ_PMC" },
                { "75rnd_762x39_AK12_Mag_F", "75Rnd 7.62mm Mag (Black)", 10000, 5000, "PHX_DonatorLevel > 0 && license_civ_PMC" },
                { "75rnd_762x39_AK12_Arid_Mag_F", "75Rnd 7.62mm Mag (Arid)", 10000, 5000, "license_civ_PMC" },
                { "75rnd_762x39_AK12_Lush_Mag_F", "75Rnd 7.62mm Mag (Lush)", 10000, 5000 "license_civ_PMC" },
                { "2Rnd_12Gauge_Slug", "12G (Slug)", 1200, 600, "true" },
                { "2Rnd_12Gauge_Pellets", "12G (Pellets)", 1200, 600, "true" },
                { "6Rnd_12Gauge_Slug", "12G Promet (Slug)", 6000, 3000, "license_civ_PMC" },
                { "6Rnd_12Gauge_Pellets", "12G Promet (Pellets)", 6000, 3000, "license_civ_PMC" },
                { "10Rnd_127x54_Mag", "10Rnd 12.7mm Mag", 3000, 1500, "license_civ_PMC" }
            };
            accs[] = {
                { "optic_Aco", "ACO (Red)", 5000, 50, "true" },
                { "optic_ACO_grn", "ACO (Green)", 5000, 50, "true" },
                { "optic_Aco_smg", "ACO SMG (Red)", 5000, 50, "true" },
                { "optic_ACO_grn_smg", "ACO SMG (Green)", 5000, 50, "true" },
                { "optic_Holosight_blk_F", "Mk17 Holosight (Black)", 5000, 60, "PHX_DonatorLevel > 0" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG (Black)", 5000, 60, "PHX_DonatorLevel > 0" },
                { "optic_Holosight", "Mk17 Holosight", 5000, 5600, "true" },
                { "optic_Holosight_smg", "Mk17 Holosight SMG", 5000, 60, "true" },
                { "optic_Holosight_khk_F", "Mk17 Holosight (Khaki)", 5000, 60, "true" },
                { "optic_Holosight_smg_khk_F", "Mk17 Holosight SMG (Khaki)", 5000, 60, "true" },
                { "optic_Hamr", "RCO (Black)", 25000, 75, "true" },
                { "optic_Hamr_khk_F", "RCO (Khaki)", 25000, 75, "true" },
                { "optic_MRCO", "MRCO", 28000, 90, "true" },
                { "optic_Arco_blk_F", "ARCO (Black)", 28000, 90, "PHX_DonatorLevel > 0" },
                { "optic_Arco", "ARCO (Brown)", 28000, 90, "true" },
                { "optic_Arco_arid_F", "ARCO (Arid)", 28000, 90, "true" },
                { "optic_Arco_lush_F", "ARCO (Lush)", 28000, 90, "true" },
                { "optic_Arco_ghex_F", "ARCO (Green Hex)", 28000, 90, "true" },
                { "optic_ERCO_blk_F", "ERCO (Black)", 28000, 100, "PHX_DonatorLevel > 0" },
                { "optic_ERCO_khk_F", "ERCO (Khaki)", 28000, 100, "true" },
                { "optic_ERCO_snd_F", "ERCO (Sand)", 28000, 100, "true" },
                { "optic_DMS", "DMS", 370000, 125000, "true" },
                { "optic_AMS", "AMS (Black)", 450000, 175000, "PHX_DonatorLevel > 0" },
                { "optic_AMS_snd", "AMS (Sand)", 450000, 175000, "true" },
                { "optic_AMS_khk", "AMS (Khaki)", 450000, 175000, "true" },
                { "optic_LRPS", "LRPS", 1000000, 250000, "true" },
                { "acc_flashlight", "Flashlight", 50, 25, "true" },
                { "acc_pointer_IR", "IR Pointer", 80, 45, "true" },
                { "muzzle_snds_acp", ".45 Suppressor", 10000, 500, "true" },
                { "muzzle_snds_L", "9mm Suppressor", 14000, 700, "true" },
                { "muzzle_snds_M", "5.56mm Suppressor (Black)", 100000, 2500, "true" },
                { "muzzle_snds_m_khk_F", "5.56mm Suppressor (Khaki)", 100000, 2500, "true" },
                { "muzzle_snds_m_snd_F", "5.56mm Suppressor (Sand)", 100000, 2500, "true" },
                { "muzzle_snds_570", "5.7mm Suppressor", 95000, 2500, "true" },
                { "muzzle_snds_58_blk_F", "5.8mm Suppressor (Black)", 115000, 3000, "PHX_DonatorLevel > 0" },
                { "muzzle_snds_58_hex_F", "5.8mm Suppressor (Hex)", 115000, 3000, "true" },
                { "muzzle_snds_58_ghex_F", "5.8mm Suppressor (Green Hex)", 115000, 3000, "true" },
                { "muzzle_snds_H", "Sound Suppressor (6.5 mm)", 140000, 5000, "true" },
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth) Suppressor (Black)", 150000, 8000, "PHX_DonatorLevel > 0" },
                { "muzzle_snds_65_TI_hex_F", "6.5mm (Stealth) Suppressor (Hex)", 150000, 8000, "true" },
                { "muzzle_snds_65_TI_ghex_F", "6.5mm (Stealth) Suppressor (Green Hex)", 150000, 8000, "true" },
                { "muzzle_snds_B", "7.62mm Suppressor (Black)", 350000, 75000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "muzzle_snds_B_khk_F", "7.62mm Suppressor (Khaki)", 350000, 75000, "license_civ_PMC" },
                { "muzzle_snds_B_snd_F", "7.62mm Suppressor (Sand)", 350000, 75000, "license_civ_PMC" },
                { "muzzle_snds_B_arid_F", "7.62mm Suppressor (Arid)", 350000, 75000, "license_civ_PMC" },
                { "muzzle_snds_B_lush_F", "7.62mm Suppressor (Lush)", 350000, 75000, "license_civ_PMC" },
                { "bipod_01_F_blk", "Bipod (Black)", 25000, 150, "PHX_DonatorLevel > 0" },
                { "bipod_01_F_khk", "Bipod (Khaki)" , 25000, 150, "true" },
                { "bipod_01_F_mtp", "Bipod (MTP)", 25000, 150, "true" },
                { "bipod_01_F_snd", "Bipod (Sand)", 25000, 150, "true" },
                { "bipod_02_F_arid", "Bipod (Arid)", 25000, 150, "true" },
                { "bipod_02_F_blk", "Bipod (Black)", 25000, 150, "PHX_DonatorLevel > 0" },
                { "bipod_02_F_hex", "Bipod (Hex)", 25000, 150, "true" },
                { "bipod_02_F_lush", "Bipod (Lush)", 25000, 150, "true" },
                { "bipod_02_F_tan", "Bipod (Brown)", 25000, 150, "true" }
            };
            items[] = {
                { "ItemMap", "Map of Altis", 120, 120, "true" },
                { "ItemGPS", "Handheld GPS", 10000, 1250, "true" },
                { "ItemRadio", "Mobile Phone", 190, 190, "true" },
                { "ItemCompass", "Compass", 45, 23, "true" },
                { "ItemWatch", "Wrist Watch", 60, 30, "true" },
                { "Binocular", "Binoculars", 270, 135, "true" },
                { "Rangefinder", "Rangefinder", 15000, 600, "true" },
                { "NVGoggles", "Night Vision Goggles", 22750, 0, "true" },
                { "ToolKit", "Toolkit", 8500, 750, "true" }
            };
        };

        class black_market {
            name = "Black Market";
            conditions = "(playerSide isEqualTo civilian) || { (player getVariable ['isCID', false]) || (player getVariable ['isHSS', false])}";
            defaultTab = "weps";
            weps[] = {
                // Pistols
                { "hgun_Pistol_heavy_02_F", "Zubr .45 ACP", 5000, 2000, "true" },
                // Sub-Machine Guns
                { "SMG_02_F", "Sting 9mm", 25000, 10000, "true" },
                // Assault Rifles
                // Light Machine Guns
                { "LMG_Zafir_F", "Zafir 7.62mm (Sand)", 7500000, 2000000, "true" },
                // Shotguns
                // Marksman Rifles
                { "srifle_DMR_02_camo_F", "MAR-10 .388 (Camo)", 5000000, 2000000, "true" },
                { "srifle_DMR_05_hex_F", "Cyrus 9.3mm (Hex)", 6000000, 2000000, "true" },
                { "srifle_LRR_F", "M320 LRR .408 (Black)", 9000000, 2000000, "true" }
            };
            mags[] = {
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 300, 150, "true" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 400, 200, "true" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 450, 225, "true" },
                { "150Rnd_762x54_Box_Tracer", "150Rnd 7.62mm Mag", 200000, 50, "true" },
                { "10Rnd_338_Mag", "10Rnd .388 Mag", 70000, 100, "true" },
                { "10Rnd_93x64_DMR_05_Mag", "10Rnd 9.3mm Mag", 70000, 100, "true" },
                { "7Rnd_408_Mag", "7Rnd .408 Mag", 80000, 100, "true" }
            };
            accs[] = {
                { "optic_Aco", "ACO (Red)", 5000, 50, "true" },
                { "optic_ACO_grn", "ACO (Green)", 5000, 50, "true" },
                { "optic_Aco_smg", "ACO SMG (Red)", 5000, 50, "true" },
                { "optic_ACO_grn_smg", "ACO SMG (Green)", 5000, 50, "true" },
                { "optic_Holosight_blk_F", "Mk17 Holosight (Black)", 5000, 60, "PHX_DonatorLevel > 0" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG (Black)", 5000, 60, "PHX_DonatorLevel > 0" },
                { "optic_Holosight", "Mk17 Holosight", 5000, 5600, "true" },
                { "optic_Holosight_smg", "Mk17 Holosight SMG", 5000, 60, "true" },
                { "optic_Holosight_khk_F", "Mk17 Holosight (Khaki)", 5000, 60, "true" },
                { "optic_Holosight_smg_khk_F", "Mk17 Holosight SMG (Khaki)", 5000, 60, "true" },
                { "optic_Hamr", "RCO (Black)", 25000, 75, "true" },
                { "optic_Hamr_khk_F", "RCO (Khaki)", 25000, 75, "true" },
                { "optic_MRCO", "MRCO", 28000, 90, "true" },
                { "optic_Arco_blk_F", "ARCO (Black)", 28000, 90, "PHX_DonatorLevel > 0" },
                { "optic_Arco", "ARCO (Brown)", 28000, 90, "true" },
                { "optic_Arco_arid_F", "ARCO (Arid)", 28000, 90, "true" },
                { "optic_Arco_lush_F", "ARCO (Lush)", 28000, 90, "true" },
                { "optic_Arco_ghex_F", "ARCO (Green Hex)", 28000, 90, "true" },
                { "optic_ERCO_blk_F", "ERCO (Black)", 28000, 100, "PHX_DonatorLevel > 0" },
                { "optic_ERCO_khk_F", "ERCO (Khaki)", 28000, 100, "true" },
                { "optic_ERCO_snd_F", "ERCO (Sand)", 28000, 100, "true" },
                { "optic_DMS", "DMS", 370000, 125000, "true" },
                { "optic_AMS", "AMS (Black)", 450000, 175000, "PHX_DonatorLevel > 0" },
                { "optic_AMS_snd", "AMS (Sand)", 450000, 175000, "true" },
                { "optic_AMS_khk", "AMS (Khaki)", 450000, 175000, "true" },
                { "optic_LRPS", "LRPS", 1000000, 250000, "true" },
                { "acc_flashlight", "Flashlight", 50, 25, "true" },
                { "acc_pointer_IR", "IR Pointer", 80, 45, "true" },
                { "muzzle_snds_acp", ".45 Suppressor", 10000, 500, "true" },
                { "muzzle_snds_L", "9mm Suppressor", 14000, 700, "true" },
                { "muzzle_snds_M", "5.56mm Suppressor (Black)", 100000, 2500, "true" },
                { "muzzle_snds_m_khk_F", "5.56mm Suppressor (Khaki)", 100000, 2500, "true" },
                { "muzzle_snds_m_snd_F", "5.56mm Suppressor (Sand)", 100000, 2500, "true" },
                { "muzzle_snds_570", "5.7mm Suppressor", 95000, 2500, "true" },
                { "muzzle_snds_58_blk_F", "5.8mm Suppressor (Black)", 115000, 3000, "PHX_DonatorLevel > 0" },
                { "muzzle_snds_58_hex_F", "5.8mm Suppressor (Hex)", 115000, 3000, "true" },
                { "muzzle_snds_58_ghex_F", "5.8mm Suppressor (Green Hex)", 115000, 3000, "true" },
                { "muzzle_snds_H", "Sound Suppressor (6.5 mm)", 140000, 5000, "true" },
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth) Suppressor (Black)", 150000, 8000, "PHX_DonatorLevel > 0" },
                { "muzzle_snds_65_TI_hex_F", "6.5mm (Stealth) Suppressor (Hex)", 150000, 8000, "true" },
                { "muzzle_snds_65_TI_ghex_F", "6.5mm (Stealth) Suppressor (Green Hex)", 150000, 8000, "true" },
                { "muzzle_snds_B", "7.62mm Suppressor (Black)", 350000, 75000, "license_civ_PMC && PHX_DonatorLevel > 0" },
                { "muzzle_snds_B_khk_F", "7.62mm Suppressor (Khaki)", 350000, 75000, "license_civ_PMC" },
                { "muzzle_snds_B_snd_F", "7.62mm Suppressor (Sand)", 350000, 75000, "license_civ_PMC" },
                { "muzzle_snds_B_arid_F", "7.62mm Suppressor (Arid)", 350000, 75000, "license_civ_PMC" },
                { "muzzle_snds_B_lush_F", "7.62mm Suppressor (Lush)", 350000, 75000, "license_civ_PMC" },
                { "bipod_01_F_blk", "Bipod (Black)", 25000, 150, "PHX_DonatorLevel > 0" },
                { "bipod_01_F_khk", "Bipod (Khaki)" , 25000, 150, "true" },
                { "bipod_01_F_mtp", "Bipod (MTP)", 25000, 150, "true" },
                { "bipod_01_F_snd", "Bipod (Sand)", 25000, 150, "true" },
                { "bipod_02_F_arid", "Bipod (Arid)", 25000, 150, "true" },
                { "bipod_02_F_blk", "Bipod (Black)", 25000, 150, "PHX_DonatorLevel > 0" },
                { "bipod_02_F_hex", "Bipod (Hex)", 25000, 150, "true" },
                { "bipod_02_F_lush", "Bipod (Lush)", 25000, 150, "true" },
                { "bipod_02_F_tan", "Bipod (Brown)", 25000, 150, "true" }
            };
            items[] = {
                { "ItemMap", "Map of Altis", 120, 120, "true" },
                { "ItemGPS", "Handheld GPS", 10000, 1250, "true" },
                { "ItemRadio", "Mobile Phone", 190, 190, "true" },
                { "ItemCompass", "Compass", 45, 23, "true" },
                { "ItemWatch", "Wrist Watch", 60, 30, "true" },
                { "Binocular", "Binoculars", 270, 135, "true" },
                { "Rangefinder", "Rangefinder", 1200, 600, "true" },
                { "NVGoggles", "Night Vision Goggles", 5000, 0, "true" },
                { "ToolKit", "Toolkit", 1500, 750, "true" }
            };
        };

        class apc_general_Store {
            name = "APC - General Store";
            conditions = "playerSide isEqualTo west";
            defaultTab = "weps";
            weps[] = {
                // coplevel-1 | PCSO
                { "hgun_Pistol_heavy_01_F", "Taser Pistol", 0, -1, "call life_coplevel >= 1" },
                { "arifle_Mk20_plain_F", "Rubber Bullet Gun", 0, 0, "call life_coplevel >= 1" },
                // coplevel-2/3 | PPC / PC
                { "SMG_05_F", "Protector 9mm", 0, -1, "call life_coplevel >= 2" },
                { "SMG_02_F", "Sting 9mm", 0, -1, "call life_coplevel >= 2" },
                { "SMG_01_F", "Vermin .45 ACP", 0, -1, "call life_coplevel >= 2" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm", 0, -1, "call life_coplevel >= 2" },
                // coplevel-4 | Senior Police Constable
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm", 0, -1, "call life_coplevel >= 4" },
                { "arifle_MXC_Black_F", "MXC 6.5mm", 0, -1, "call life_coplevel >= 4" },
                // coplevel-5 | Sergeant
                { "arifle_SDAR_F", "SDAR 5.56mm", 0, -1, "call life_coplevel >= 5" },
                { "arifle_MX_Black_F", "MX 6.5mm", 0, -1, "call life_coplevel >= 5" },
                { "arifle_MSBS65_black_F", "Promet 6.5mm", 0, -1, "call life_coplevel >= 5" },
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm", 0, -1, "call life_coplevel >= 5" },
                { "arifle_Katiba_F", "Katiba 6.5mm", 0, -1, "call life_coplevel >= 5" }, //for level 4 for ops
                // coplevel-6 | Inspector
                { "arifle_MXM_Black_F", "MXM 6.5mm", 0, -1, "call life_coplevel >= 6" },
                { "arifle_MSBS65_Mark_black_F", "Promet MR 6.5mm", 0, -1, "call life_coplevel >= 6" },
                { "SMG_03_black", "ADR-97 5.7mm", 0, -1, "call life_coplevel >= 6" },
                { "SMG_03C_black", "ADR-97C 5.7mm", 0, -1, "call life_coplevel >= 6" },
                { "SMG_03_TR_black", "ADR-97 TR 5.7mm", 0, -1, "call life_coplevel >= 6" },
                { "SMG_03C_TR_black", "ADR-97C TR 5.7mm", 0, -1, "call life_coplevel >= 6" },
                { "srifle_DMR_07_blk_F", "CMR-76 6.5mm", 0, -1, "call life_coplevel >= 6" },
                { "arifle_ARX_blk_F", "Type-115 6.5mm", 0, -1, "call life_coplevel >= 6" },
                // coplevel-7 | Chief Inspector
                { "arifle_MX_SW_Black_F", "MX SW 6.5mm", 0, -1, "call life_coplevel >= 7" },
                { "arifle_MSBS65_UBS_black_F", "Promet SG 6.5mm", 0, -1, "call life_coplevel >= 7" },
                // coplevel-8 | Commander
                // coplevel-9 | Superintendent
                { "arifle_AK12U_F", "AKU-12 7.62mm (Black)", 0, -1, "call life_coplevel >= 9" },
                { "arifle_SPAR_03_blk_F", "Spar-17 7.62mm", 0, -1, "call life_coplevel >= 9" }, //for level 7 for ops
                // coplevel-10 | Chief Superintendent
                { "srifle_EBR_F", "Mk-18 7.62mm", 0, -1, "call life_coplevel >= 10" }, //for level 9 for ops
                { "arifle_AK12_F", "AK-12 7.62mm", 0, -1, "call life_coplevel >= 10" },
                // coplevel-11 | Assistant Commissioner
                { "LMG_Mk200_black_F", "Mk200 6.5mm", 0, -1, "call life_coplevel >= 11" },
                { "srifle_DMR_03_F", "Mk-I 7.62mm", 0, -1, "call life_coplevel >= 11" }, //for level 10 for ops
                { "srifle_DMR_02_F", "MAR-10 .338", 0, -1, "call life_coplevel >= 11" },
                { "srifle_DMR_04_F", "ASP-1 Kir", 0, -1, "call life_coplevel >= 11" }
                // coplevel-12 | Deputy Commissioner
                // coplevel-13 | Commissioner
            };
            mags[] = {
                // coplevel-1 | PCSO
                { "11Rnd_45ACP_Mag", "Taser Cartridge", 0, -1, "call life_coplevel >= 1" },
                { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1, "call life_coplevel >= 1" },
                // coplevel-2 | PPC
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 0, -1, "call life_coplevel >= 2" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP Mag", 0, -1, "call life_coplevel >= 2" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 0, -1, "call life_coplevel >= 2" },
                // coplevel-3 | Police Constable
                // coplevel-4 | Senior Police Constable
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 0, -1, "call life_coplevel >= 4" },
                { "30Rnd_65x39_caseless_black_mag", "30Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 4" },
                // coplevel-5 | Sergeant
                { "20Rnd_556x45_UW_mag", "20Rnd 5.56mm UW Mag", 0, -1, "call life_coplevel >= 5" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 0, -1, "call life_coplevel >= 5" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 0, -1, "call life_coplevel >= 5" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 0, -1, "call life_coplevel >= 5" },
                // coplevel-6 | Inspector
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 0, -1, "call life_coplevel >= 6" },
                { "20Rnd_650x39_Cased_Mag_F", "20Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 6" },
                // coplevel-7 | Chief Inspector
                { "100Rnd_65x39_caseless_black_mag", "100Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 7" },
                { "6Rnd_12Gauge_Slug", "12G Promet (Slug)", 0, -1, "call life_coplevel >= 7" },
                { "6Rnd_12Gauge_Pellets", "12G Promet (Pellets)", 0, -1, "call life_coplevel >= 7" },
                // coplevel-8 | Commander
                // coplevel-9 | Superintendent
                { "20Rnd_650x39_Cased_Mag_F", "20Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 9" },
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 0, -1, "call life_coplevel >= 9" },
                { "30Rnd_762x39_AK12_Mag_F", "30Rnd 7.62mm Mag", 0, -1, "call life_coplevel >= 9" },
                // coplevel-10 | Chief Superintendent
                { "30Rnd_762x39_AK12_Mag_F", "30Rnd 7.62mm Mag (Black)", 0, -1, "call life_coplevel >= 10" },
                // coplevel-11 | Assistant Commissioner
                { "30Rnd_762x39_Mag_F", "30Rnd 7.62mm Mag", 0, -1, "call life_coplevel >= 11" },
                { "200Rnd_65x39_cased_Box", "200Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 11" },
                { "10Rnd_338_Mag", ".338 LM 10Rnd Mag", 0, -1, "call life_coplevel >= 11" },
                // coplevel-12 | Deputy Commissioner
                // coplevel-13 | Commissioner
                { "10Rnd_127x54_Mag", "12.7mm 10Rnd Mag", 0, -1, "call life_coplevel >= 11" }
            };
            accs[] = {
                // coplevel-1 | Community Support Officer
                { "optic_MRD", "MRD", 0, -1, "call life_coplevel >= 1" },
                { "acc_flashlight_pistol",  "Pistol Flashlight", 0, -1, "call life_coplevel >= 1" },
                { "muzzle_snds_acp", "Taser Suppressor", 0, -1, "call life_coplevel >= 1" },
                { "optic_Holosight_blk_F", "Holosight", 0, -1, "call life_coplevel >= 1" },
                { "acc_flashlight", "Flashlight", 0, -1, "call life_coplevel >= 2" },
                { "muzzle_snds_M", "5.56mm Suppressor", 0, -1, "call life_coplevel >= 1" },
                // coplevel-2 | Police Community Support Officer
                { "optic_Aco", "ACO", 0, -1, "call life_coplevel >= 2" },
                { "optic_Aco_smg", "ACO SMG", 0, -1, "call life_coplevel >= 2" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG", 0, -1, "call life_coplevel >= 2" },
                { "acc_pointer_IR", "IR Pointer", 0, -1, "call life_coplevel >= 2" },
                { "bipod_01_F_blk", "Bipod", 0, -1, "call life_coplevel >= 2" },
                { "optic_Hamr", "RCO", 0, -1, "call life_coplevel >= 2" },
                { "optic_MRCO", "MRCO", 0, -1, "call life_coplevel >= 2" },
                { "optic_Arco_blk_F", "ARCO", 0, -1, "call life_coplevel >= 2" },
                { "optic_ERCO_blk_F", "ERCO", 0, -1, "call life_coplevel >= 2" },
                // coplevel-3 | Police Constable
                { "muzzle_snds_L", "9mm Suppressor", 0, -1, "call life_coplevel >= 3" },
                { "muzzle_snds_acp", ".45 ACP Suppressor", 0, -1, "call life_coplevel >= 3" },
                // coplevel-4 | Senior Police Constable
                { "muzzle_snds_58_blk_F", "5.8mm (Stealth)Suppressor", 0, -1, "call life_coplevel >= 4" },
                // coplevel-5 | Sergeant
                { "muzzle_snds_H", "6.5mm Suppressor", 0, -1, "call life_coplevel >= 4" },
                // coplevel-6 | Inspector
                { "muzzle_snds_570", "5.7mm Suppressor", 0, -1, "call life_coplevel >= 6" },
                // coplevel-7 | Chief Inspector
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth)Suppressor", 0, -1, "call life_coplevel >= 7" },
                // coplevel-8 | Commander
                // coplevel-9 | Superintendent
                { "muzzle_snds_B", "7.62mm Suppressor", 0, -1, "call life_coplevel >= 9" }
                // coplevel-10 | Chief Superintendent
                // coplevel-11 | Assistant Commissioner
                // coplevel-12 | Deputy Commissioner
                // coplevel-13 | Commissioner
            };
            items[] = {
                // coplevel-1 | Community Support Officer
                { "ItemMap", "Map of Altis", 0, -1, "call life_coplevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_coplevel >= 1" },
                { "B_UavTerminal", "UAV Terminal", 0, -1, "call life_npaslevel >=3" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_coplevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_coplevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_coplevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_coplevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_coplevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_coplevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_coplevel >= 1" }
                // coplevel-2 | Police Community Support Officer
                // coplevel-3 | Police Constable
                // coplevel-4 | Senior Police Constable
                // coplevel-5 | Sergeant
                // coplevel-6 | Inspector
                // coplevel-7 | Chief Inspector
                // coplevel-8 | Commander
                // coplevel-9 | Superintendent
                // coplevel-10 | Chief Superintendent
                // coplevel-11 | Assistant Commissioner
                // coplevel-12 | Deputy Commissioner
                // coplevel-13 | Commissioner
            };
        };

        class tpu_general_Store {
            name = "TPU - General Store";
            conditions = "playerSide isEqualTo west && call life_tpulevel >= 1";
            defaultTab = "weps";
            weps[] = {
                // life_tpulevel-1 | AFO
                { "hgun_Pistol_heavy_01_F", "Taser Pistol", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_Mk20_plain_F", "Rubber Bullet Gun", 0, 0, "call life_tpulevel >= 1" },
                { "SMG_05_F", "Protector 9mm", 0, -1, "call life_tpulevel >= 1" },
                { "SMG_02_F", "Sting 9mm", 0, -1, "call life_tpulevel >= 1" },
                { "SMG_01_F", "Vermin .45 ACP", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm", 0, -1, "call life_tpulevel >= 1" },
                { "SMG_03_TR_black", "ADR-97 5.7mm", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_MX_Black_F", "MX 6.5mm", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_MSBS65_black_F", "Promet 6.5mm", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_MSBS65_Mark_black_F", "Promet MR 6.5mm", 0, -1, "call life_tpulevel >= 1" },
                { "arifle_ARX_blk_F", "Type-115 6.5mm", 0, -1, "call life_tpulevel >= 1" },
                // life_tpulevel-2 | SFO
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm", 0, -1, "call life_tpulevel >= 2" },
                { "arifle_MXM_Black_F", "MXM 6.5mm", 0, -1, "call life_tpulevel >= 2" },
                { "arifle_MX_SW_Black_F", "MX SW 6.5mm", 0, -1, "call life_tpulevel >= 2" },
                // life_tpulevel-3 | Team Leader
                { "arifle_SPAR_03_blk_F", "Spar-17 7.62mm", 0, -1, "call life_tpulevel >= 3" },
                // life_tpulevel-4 | Deputy
                { "srifle_EBR_F", "Mk-18 7.62mm", 0, -1, "call life_tpulevel >= 4" },
                // life_tpulevel-4 | Chief
                { "srifle_DMR_03_F", "Mk-I 7.62mm", 0, -1, "call life_tpulevel >= 5" }
            };
            mags[] = {
                // life_tpulevel-1 | AFO
                { "11Rnd_45ACP_Mag", "Taser Cartridge", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP Mag", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 0, -1, "call life_tpulevel >= 1" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_65x39_caseless_black_mag", "30Rnd 6.5mm Mag", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 0, -1, "call life_tpulevel >= 1" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 0, -1, "call life_tpulevel >= 1" },
                // life_tpulevel-2 | SFO
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 0, -1, "call life_tpulevel >= 2" },
                { "100Rnd_65x39_caseless_black_mag", "100Rnd 6.5mm Mag", 0, -1, "call life_tpulevel >= 2" },
                { "100Rnd_65x39_caseless_black_mag", "100Rnd 6.5mm Mag", 0, -1, "call life_tpulevel >= 2" },
                // life_tpulevel-3 | Team Leader
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 0, -1, "call life_tpulevel >= 3" }
                // life_tpulevel-4 | Deputy/Chief
            };
            accs[] = {
                // life_tpulevel-1 | AFO
                { "optic_MRD", "MRD", 0, -1, "call life_tpulevel >= 1" },
                { "acc_flashlight_pistol",  "Pistol Flashlight", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_acp", "Taser Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "optic_Aco", "ACO", 0, -1, "call life_tpulevel >= 1" },
                { "optic_Aco_smg", "ACO SMG", 0, -1, "call life_tpulevel >= 1" },
                { "optic_Holosight_blk_F", "Holosight", 0, -1, "call life_tpulevel >= 1" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG", 0, -1, "call life_tpulevel >= 1" },
                { "optic_Hamr", "RCO", 0, -1, "call life_tpulevel >= 1" },
                { "optic_MRCO", "MRCO", 0, -1, "call life_tpulevel >= 1" },
                { "optic_Arco_blk_F", "ARCO", 0, -1, "call life_tpulevel >= 1" },
                { "optic_ERCO_blk_F", "ERCO", 0, -1, "call life_tpulevel >= 1" },
                { "acc_flashlight", "Flashlight", 0, -1, "call life_tpulevel >= 1" },
                { "acc_pointer_IR", "IR Pointer", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_L", "9mm Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_acp", ".45 ACP Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_M", "5.56mm Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_570", "5.7mm Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_58_blk_F", "5.8mm (Stealth)Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "muzzle_snds_H", "6.5mm Suppressor", 0, -1, "call life_tpulevel >= 1" },
                { "bipod_01_F_blk", "Bipod", 0, -1, "call life_tpulevel >= 1" },
                // life_tpulevel-2 | SFO
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth)Suppressor", 0, -1, "call life_tpulevel >= 2" },
                // life_tpulevel-3 | Team Leader
                { "muzzle_snds_B", "7.62mm Suppressor", 0, -1, "call life_tpulevel >= 3" },
                { "optic_DMS", "DMS", 0, -1, "call life_tpulevel >= 3" }
                // life_tpulevel-4 | Deputy/Chief

            };
            items[] = {
                // life_tpulevel-1 | AFO
                { "ItemMap", "Map of Altis", 0, -1, "call life_tpulevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_tpulevel >= 1" },
                { "B_UavTerminal", "UAV Terminal", 0, -1, "call life_npaslevel >= 3" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_tpulevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_tpulevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_tpulevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_tpulevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_tpulevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_tpulevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_tpulevel >= 1" }
                // life_tpulevel-2 | SFO
                // life_tpulevel-3 | Team Leader
                // life_tpulevel-4 | Deputy/Chief
            };
        };

        class mpu_general_Store {
            name = "MPU - General Store";
            conditions = "playerSide isEqualTo west && call life_mpulevel >= 1";
            defaultTab = "weps";
            weps[] = {
                // life_mpulevel-1 | Marine Officer
                { "hgun_Pistol_heavy_01_F", "Taser Pistol", 0, -1, "call life_mpulevel >= 1" },
                { "arifle_Mk20_plain_F", "Rubber Bullet Gun", 0, 0, "call life_mpulevel >= 1" },
                { "SMG_05_F", "Protector 9mm", 0, -1, "call life_mpulevel >= 1" },
                { "SMG_02_F", "Sting 9mm", 0, -1, "call life_mpulevel >= 1" },
                { "SMG_01_F", "Vermin .45 ACP", 0, -1, "call life_mpulevel >= 1" },
                { "arifle_SDAR_F", "SDAR 5.56 mm", 0, -1, "call life_mpulevel >= 1" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm", 0, -1, "call life_mpulevel >= 1" },
                { "SMG_03_TR_black", "ADR-97 5.7mm", 0, -1, "call life_mpulevel >= 1" },
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm", 0, -1, "call life_mpulevel >= 1" },
                // life_mpulevel-2 | Advanced Marine Officer
                { "arifle_MXC_Black_F", "MXC 6.5mm", 0, -1, "call life_mpulevel >= 2" },
                // life_mpulevel-3 | Marine Trainer
                { "arifle_MSBS65_black_F", "Promet 6.5mm", 0, -1, "call life_mpulevel >= 3" },
                { "arifle_MX_SW_Black_F", "MX SW 6.5mm", 0, -1, "call life_mpulevel >= 3" }
                // life_mpulevel-4 | Deputy
                // life_mpulevel-4 | Chief
            };
            mags[] = {
                // life_mpulevel-1 | Marine Officer
                { "11Rnd_45ACP_Mag", "Taser Cartridge", 0, -1, "call life_mpulevel >= 1" },
                { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1, "call life_mpulevel >= 1" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 0, -1, "call life_mpulevel >= 1" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP Mag", 0, -1, "call life_mpulevel >= 1" },
                { "20Rnd_556x45_UW_mag", "20Rnd 5.56mm Underwater Mag", 0, -1, "call life_mpulevel >= 1" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 0, -1, "call life_mpulevel >= 1" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 0, -1, "call life_mpulevel >= 1" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 0, -1, "call life_mpulevel >= 1" },
                // life_mpulevel-2 | Advanced Marine Officer
                { "30Rnd_65x39_caseless_black_mag", "30Rnd 6.5mm Mag", 0, -1, "call life_mpulevel >= 2" },
                // life_mpulevel-3 | Marine Trainer
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 0, -1, "call life_mpulevel >= 3" },
                { "100Rnd_65x39_caseless_black_mag", "100Rnd 6.5mm Mag", 0, -1, "call life_mpulevel >= 3" }
                // life_mpulevel-4 | Deputy/Chief
            };
            accs[] = {
                // life_mpulevel-1 | Marine Officer
                { "optic_MRD", "MRD", 0, -1, "call life_mpulevel >= 1" },
                { "acc_flashlight_pistol",  "Pistol Flashlight", 0, -1, "call life_mpulevel >= 1" },
                { "muzzle_snds_acp", "Taser Suppressor", 0, -1, "call life_mpulevel >= 1" },
                { "optic_Aco", "ACO", 0, -1, "call life_mpulevel >= 1" },
                { "optic_Aco_smg", "ACO SMG", 0, -1, "call life_mpulevel >= 1" },
                { "optic_Holosight_blk_F", "Holosight", 0, -1, "call life_mpulevel >= 1" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG", 0, -1, "call life_mpulevel >= 1" },
                { "optic_Hamr", "RCO", 0, -1, "call life_mpulevel >= 1" },
                { "optic_MRCO", "MRCO", 0, -1, "call life_mpulevel >= 1" },
                { "optic_Arco_blk_F", "ARCO", 0, -1, "call life_mpulevel >= 1" },
                { "optic_ERCO_blk_F", "ERCO", 0, -1, "call life_mpulevel >= 1" },
                { "acc_flashlight", "Flashlight", 0, -1, "call life_mpulevel >= 1" },
                { "acc_pointer_IR", "IR Pointer", 0, -1, "call life_mpulevel >= 1" },
                { "muzzle_snds_L", "9mm Suppressor", 0, -1, "call life_mpulevel >= 1" },
                { "muzzle_snds_acp", ".45 ACP Suppressor", 0, -1, "call life_mpulevel >= 1" },
                { "muzzle_snds_M", "5.56mm Suppressor", 0, -1, "call life_mpulevel >= 1" },
                { "muzzle_snds_570", "5.7mm Suppressor", 0, -1, "call life_mpulevel >= 1" },
                { "muzzle_snds_58_blk_F", "5.8mm (Stealth)Suppressor", 0, -1, "call life_mpulevel >= 1" },
                { "bipod_01_F_blk", "Bipod", 0, -1, "call life_mpulevel >= 1" },
                // life_mpulevel-2 | Advanced Marine Officer
                { "muzzle_snds_H", "6.5mm Suppressor", 0, -1, "call life_mpulevel >= 2" },
                // life_mpulevel-3 | Marine Trainer
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth)Suppressor", 0, -1, "call life_mpulevel >= 2" },
                { "muzzle_snds_B", "7.62mm Suppressor", 0, -1, "call life_mpulevel >= 3" }
                // life_mpulevel-4 | Deputy/Chief
            };
            items[] = {
                // life_mpulevel-1 | Marine Officer
                { "ItemMap", "Map of Altis", 0, -1, "call life_mpulevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_mpulevel >= 1" },
                { "B_UavTerminal", "UAV Terminal", 0, -1, "call life_npaslevel >= 3" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_mpulevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_mpulevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_mpulevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_mpulevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_mpulevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_mpulevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_mpulevel >= 1" }
                // life_mpulevel-2 | Advanced Marine Officer
                // life_mpulevel-3 | Marine Trainer
                // life_mpulevel-4 | Deputy/Chief
            };
        };

        class ctu_general_Store {
            name = "CTU - General Store";
            conditions = "playerSide isEqualTo west && call life_ctulevel >= 1";
            defaultTab = "weps";
            weps[] = {
                // life_ctulevel-1 | Operator
                { "hgun_Pistol_heavy_01_F", "Taser Pistol", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_Mk20_plain_F", "Rubber Bullet Gun", 0, 0, "call life_ctulevel >= 1" },
                { "SMG_05_F", "Protector 9mm", 0, -1, "call life_ctulevel >= 1" },
                { "SMG_02_F", "Sting 9mm", 0, -1, "call life_ctulevel >= 1" },
                { "SMG_01_F", "Vermin .45 ACP", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm", 0, -1, "call life_ctulevel >= 1" },
                { "SMG_03_TR_black", "ADR-97 5.7mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_MX_Black_F", "MX 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_MXM_Black_F", "MXM 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_MX_SW_Black_F", "MX SW 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_MSBS65_black_F", "Promet 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_MSBS65_Mark_black_F", "Promet MR 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_ARX_blk_F", "Type-115 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_AK12U_F", "AKU-12 7.62mm (Black)", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_SPAR_03_blk_F", "Spar-17 7.62mm", 0, -1, "call life_ctulevel >= 1" },
                { "srifle_EBR_F", "Mk-18 7.62mm", 0, -1, "call life_ctulevel >= 1" },
                { "arifle_MSBS65_UBS_black_F", "Promet SG 6.5mm", 0, -1, "call life_ctulevel >= 1" },
                // life_ctulevel-2 Senior Operator
                { "srifle_DMR_03_F", "Mk-I 7.62mm", 0, -1, "call life_ctulevel >= 2" },
                // life_ctulevel-3 | Team Leader
                { "arifle_RPK12_F", "RPK-12 7.62mm", 0, -1, "call life_ctulevel >= 3" },
                // life_ctulevel-4 | Deputy/Chief
                { "LMG_Mk200_black_F", "Mk200 6.5mm", 0, -1, "call life_ctulevel >= 4" },
                { "srifle_DMR_04_F", "ASP-1 Kir", 0, -1, "call life_ctulevel >= 4" }
            };
            mags[] = {
                // life_ctulevel-1 | Operator
                { "11Rnd_45ACP_Mag", "Taser Cartridge", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP Mag", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_65x39_caseless_black_mag", "30Rnd 6.5mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "100Rnd_65x39_caseless_black_mag", "100Rnd 6.5mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 0, -1, "call life_ctulevel >= 1" },
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 0, -1, "call life_ctulevel >= 1" },
                { "6Rnd_12Gauge_Slug", "12G Promet (Slug)", 0, -1, "call life_ctulevel >= 1" },
                { "6Rnd_12Gauge_Pellets", "12G Promet (Pellets)", 0, -1, "call life_ctulevel >= 1" },
                { "30Rnd_762x39_AK12_Mag_F", "30Rnd 7.62mm Mag", 0, -1, "call life_ctulevel >= 1" },
                // life_ctulevel-2 Senior Operator
                // life_ctulevel-3 | Team Leader
                { "75rnd_762x39_AK12_Mag_F", "75Rnd 7.62mm Mag", 0, -1, "call life_ctulevel >= 3" },
                // life_ctulevel-4 | Deputy/Chief
                { "200Rnd_65x39_cased_Box", "200Rnd 6.5mm Mag", 0, -1, "call life_ctulevel >= 4" },
                { "10Rnd_127x54_Mag", "12.7mm 10Rnd Mag", 0, -1, "call life_ctulevel >= 4" }
            };
            accs[] = {
                // life_ctulevel-1 | Operator
                { "optic_MRD", "MRD", 0, -1, "call life_ctulevel >= 1" },
                { "acc_flashlight_pistol",  "Pistol Flashlight", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_acp", "Taser Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "optic_Aco", "ACO", 0, -1, "call life_ctulevel >= 1" },
                { "optic_Aco_smg", "ACO SMG", 0, -1, "call life_ctulevel >= 1" },
                { "optic_Holosight_blk_F", "Holosight", 0, -1, "call life_ctulevel >= 1" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG", 0, -1, "call life_ctulevel >= 1" },
                { "optic_Hamr", "RCO", 0, -1, "call life_ctulevel >= 1" },
                { "optic_MRCO", "MRCO", 0, -1, "call life_ctulevel >= 1" },
                { "optic_Arco_blk_F", "ARCO", 0, -1, "call life_ctulevel >= 1" },
                { "optic_ERCO_blk_F", "ERCO", 0, -1, "call life_ctulevel >= 1" },
                { "acc_flashlight", "Flashlight", 0, -1, "call life_ctulevel >= 1" },
                { "acc_pointer_IR", "IR Pointer", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_L", "9mm Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_acp", ".45 ACP Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_M", "5.56mm Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_570", "5.7mm Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_58_blk_F", "5.8mm (Stealth)Suppressor", 0, "call life_ctulevel >= 1" },
                { "muzzle_snds_H", "6.5mm Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth)Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "muzzle_snds_B", "7.62mm Suppressor", 0, -1, "call life_ctulevel >= 1" },
                { "bipod_01_F_blk", "Bipod", 0, -1, "call life_ctulevel >= 1" },
                // life_ctulevel-2 Senior Operator
                // life_ctulevel-3 | Team Leader
                { "optic_DMS", "DMS", 0, -1, "call life_ctulevel >= 3" },
                // life_ctulevel-4 | Deputy/Chief
                { "optic_AMS", "AMS", 0, -1, "call life_ctulevel >= 4" }
            };
            items[] = {
                // life_ctulevel-1 | Operator
                { "ItemMap", "Map of Altis", 0, -1, "call life_ctulevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_ctulevel >= 1" },
                { "B_UavTerminal", "UAV Terminal", 0, -1, "call life_npaslevel >= 3" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_ctulevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_ctulevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_ctulevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_ctulevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_ctulevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_ctulevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_ctulevel >= 1" }
                // life_ctulevel-2 Senior Operator
                // life_ctulevel-3 | Team Leader
                // life_ctulevel-4 | Deputy/Chief
            };
        };

        class apc_operations_Store {
            name = "APC Operations Store";
            conditions = "playerSide isEqualTo west";
            defaultTab = "weps";
            weps[] = {
                // coplevel-1 | Community Support Officer
                // coplevel-2 | Police Community Support Officer
                // coplevel-3 | Police Constable
                { "arifle_MXC_Black_F", "MXC 6.5mm", 0, -1, "call life_coplevel >= 3" },
                // coplevel-4 | Senior Police Constable
                { "arifle_Katiba_F", "Katiba 6.5mm", 0, -1, "call life_coplevel >= 4" },
                // coplevel-5 | Sergeant
                { "arifle_ARX_blk_F", "Type-115 6.5mm", 0, -1, "call life_coplevel >= 5" },
                // coplevel-6 | Inspector
                { "arifle_AK12U_F", "AKU-12 7.62mm (Black)", 0, -1, "call life_coplevel >= 6" },
                // coplevel-7 | Chief Inspector
                { "arifle_SPAR_03_blk_F", "SPAR-17 7.62mm (Black)", 0, -1, "call life_coplevel >= 7" },
                // coplevel-8 | Commander
                // coplevel-9 | Superintendent
                { "srifle_EBR_F", "Mk-18 7.62mm", 0, -1, "call life_coplevel >= 9" },
                // coplevel-10 | Chief Superintendent
                { "srifle_DMR_03_F", "Mk-I 7.62mm", 0, -1, "call life_coplevel >= 10" }
                // coplevel-11 | Assistant Commissioner
                // coplevel-12 | Deputy Commissioner
                // coplevel-13 | Commissioner
            };
            mags[] = {
                { "30Rnd_65x39_caseless_black_mag", "30Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 3" },
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Mag", 0, -1, "call life_coplevel >= 4" },
                { "30Rnd_762x39_AK12_Mag_F", "30Rnd 7.62mm Mag", 0, -1, "call life_coplevel >= 6" },
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 0, -1, "call life_coplevel >= 7" }
            };
            accs[] = {
                // life_ctulevel-1 | Operator
                { "optic_MRD", "MRD", 0, -1, "call life_coplevel >= 3" },
                { "optic_Aco", "ACO", 0, -1, "call life_coplevel >= 3" },
                { "optic_Aco_smg", "ACO SMG", 0, -1, "call life_coplevel >= 3" },
                { "optic_Holosight_blk_F", "Holosight", 0, -1, "call life_coplevel >= 3" },
                { "optic_Hamr", "RCO", 0, -1, "call life_coplevel >= 3" },
                { "optic_MRCO", "MRCO", 0, -1, "call life_coplevel >= 3" },
                { "optic_Arco_blk_F", "ARCO", 0, -1, "call life_coplevel >= 3" },
                { "optic_ERCO_blk_F", "ERCO", 0, -1, "call life_coplevel >= 3" },
                { "acc_flashlight", "Flashlight", 0, -1, "call life_coplevel >= 3" },
                { "acc_pointer_IR", "IR Pointer", 0, -1, "call life_coplevel >= 3" },
                { "muzzle_snds_H", "6.5mm Suppressor", 0, -1, "call life_coplevel >= 3" },
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth)Suppressor", 0, -1, "call life_coplevel >= 5" },
                { "muzzle_snds_B", "7.62mm Suppressor", 0, -1, "call life_coplevel >= 7" },
                { "bipod_01_F_blk", "Bipod", 0, -1, "call life_coplevel >= 3" },
                // life_ctulevel-2 Senior Operator
                // life_ctulevel-3 | Team Leader
                { "optic_DMS", "DMS", 0, -1, "call life_coplevel >= 9" },
                // life_ctulevel-4 | Deputy/Chief
                { "optic_AMS", "AMS", 0, -1, "call life_coplevel >= 10" }
            };
            items[] = {
                // life_ctulevel-1 | Operator
                { "ItemMap", "Map of Altis", 0, -1, "call life_ctulevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_ctulevel >= 1" },
                { "B_UavTerminal", "UAV Terminal", 0, -1, "call life_npaslevel >= 3" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_ctulevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_ctulevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_ctulevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_ctulevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_ctulevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_ctulevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_ctulevel >= 1" }
                // life_ctulevel-2 Senior Operator
                // life_ctulevel-3 | Team Leader
                // life_ctulevel-4 | Deputy/Chief
            };
        };

        class cid_general_store {
            name = "CID - General Store";
            conditions = "playerSide isEqualTo civilian && { player getVariable ['isCID', false] }";
            defaultTab = "weps";
            weps[] = {
                // cidlevel-1 | Detective Senior Constable
                { "hgun_Pistol_heavy_01_F", "Taser Pistol", 0, -1, "call life_cidlevel >= 1" },
                { "hgun_Pistol_01_F", "PM 9mm", 0, -1, "call life_cidlevel >= 1" },
                { "hgun_Rook40_F", "Rook-40 9mm", 0, -1, "call life_cidlevel >= 1" },
                { "hgun_ACPC2_F", "ACP-C2 .45 ACP", 0, -1, "call life_cidlevel >= 1" },
                { "hgun_Pistol_heavy_02_F", "Zubr .45 ACP", 0, -1, "call life_cidlevel >= 1" },
                { "hgun_PDW2000_F", "PDW2000 9mm", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_05_F", "Protector 9mm", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_02_F", "Sting 9mm", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_01_F", "Vermin .45 ACP", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03C_TR_khaki", "ADR-97C TR 5.7mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "SMG_03C_TR_khaki", "ADR-97C TR 5.7mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03C_TR_hex", "ADR-97C TR 5.7mm (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03C_TR_camo", "ADR-97C TR 5.7mm (Camo)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03C_khaki", "ADR-97C 5.7mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "SMG_03C_khaki", "ADR-97C 5.7mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03C_hex", "ADR-97C 5.7mm (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03C_camo", "ADR-97C 5.7mm (Camo)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03_TR_khaki", "ADR-97 TR 5.7mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "SMG_03_TR_khaki", "ADR-97 TR 5.7mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03_TR_hex", "ADR-97 TR 5.7mm (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03_TR_camo", "ADR-97 TR 5.7mm (Camo)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03_khaki", "ADR-97 5.7mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "SMG_03_khaki", "ADR-97 5.7mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03_hex", "ADR-97 5.7mm (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "SMG_03_camo", "ADR-97 5.7mm (Camo)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_AKS_F", "AKS-74U 5.45mm", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_Mk20C_F", "Mk20C 5.56mm", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_Mk20_F", "Mk20 5.56mm", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_TRG20_F", "TRG-20 5.56mm", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_TRG21_F", "TRG-21 5.56mm", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_CTAR_blk_F", "CAR-95 5.8mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "arifle_CTAR_hex_F", "CAR-95 5.8mm (Green Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_CTAR_ghex_F", "CAR-95 5.8mm (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_MXC_Black_F", "MXC 6.5mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "arifle_MXC_F", "MXC 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_MX_Black_F", "MX 6.5mm (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "arifle_MX_F", "MX 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 1" },
                { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                // cidlevel-2 | Detective Sergeant
                { "arifle_Katiba_F", "Katiba 6.5mm", 0, -1, "call life_cidlevel >= 2" },
                { "arifle_MXM_Black_F", "MXM 6.5mm (Black)", 0, -1, "call life_cidlevel >= 2 && PHX_DonatorLevel > 0" },
                { "arifle_MXM_F", "MXM 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 2" },
                { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 0, -1, "call life_cidlevel >= 2" },
                { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56mm (Black)", 0, -1, "call life_cidlevel >= 2 && PHX_DonatorLevel > 0" },
                { "arifle_SPAR_02_snd_F", "SPAR-16S 5.56mm (Sand)", 0, -1, "call life_cidlevel >= 2" },
                { "arifle_SPAR_02_khk_F", "SPAR-16S 5.56mm (Khaki)", 0, -1, "call life_cidlevel >= 2" },
                { "arifle_CTARS_blk_F", "CAR-95-1 5.8mm (Black)", 0, -1, "call life_cidlevel >= 2 && PHX_DonatorLevel > 0" },
                { "arifle_CTARS_hex_F", "CAR-95-1 5.8mm (Hex)", 0, -1, "call life_cidlevel >= 2" },
                { "arifle_CTARS_ghex_F", "CAR-95-1 5.8mm (Green Hex)", 0, -1, "call life_cidlevel >= 2" },
                // cidlevel-3 | Detective Inspector
                { "arifle_MSBS65_black_F", "Promet 6.5mm (Black)", 0, -1, "call life_cidlevel >= 3 && PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_F", "Promet 6.5mm (Green)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_camo_F", "Promet 6.5mm (Camo)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_sand_F", "Promet 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_Mark_black_F", "Promet MR 6.5mm (Black)", 0, -1, "call life_cidlevel >= 3 && PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_Mark_F", "Promet MR 6.5mm (Green)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_Mark_camo_F", "Promet MR 6.5mm (Camo)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_Mark_sand_F", "Promet MR 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_UBS_black_F", "Promet SG 6.5mm (Black)", 0, -1, "call life_cidlevel >= 3 && PHX_DonatorLevel > 0" },
                { "arifle_MSBS65_UBS_F", "Promet SG 6.5mm (Green)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_UBS_camo_F", "Promet SG 6.5mm (Camo)", 0, -1, "call life_cidlevel >= 3" },
                { "arifle_MSBS65_UBS_sand_F", "Promet SG 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 3" },
                // cidlevel-4 | Detective Chief Inspector
                { "arifle_ARX_blk_F", "Type-115 6.5mm (Black)", 0, -1, "call life_cidlevel >= 4 && PHX_DonatorLevel > 0" },
                { "arifle_ARX_hex_F", "Type-115 6.5mm (Hex)", 0, -1, "call life_cidlevel >= 4" },
                { "arifle_ARX_ghex_F", "Type-115 6.5mm (Green Hex)", 0, -1, "call life_cidlevel >= 4" },
                { "arifle_MX_SW_Black_F", "MX SW 6.5mm (Black)", 0, -1, "call life_cidlevel >= 4 && PHX_DonatorLevel > 0" },
                { "arifle_MX_SW_F", "MX SW 6.5mm (Sand)", 0, -1, "call life_cidlevel >= 4" },
                { "arifle_MX_SW_khk_F", "MX SW 6.5mm (Khaki)", 0, -1, "call life_cidlevel >= 4" },
                { "srifle_DMR_01_F", "Rahim 7.62mm", 0, -1, "call life_cidlevel >= 4" },
                { "arifle_SPAR_03_blk_F", "SPAR-17 7.62mm (Black)", 0, -1, "call life_cidlevel >= 4 && PHX_DonatorLevel > 0" },
                { "arifle_SPAR_03_khk_F", "SPAR-17 7.62mm (Khaki)", 0, -1, "call life_cidlevel >= 4" },
                { "arifle_SPAR_03_snd_F", "SPAR-17 7.62mm (Sand)", 0, -1, "call life_cidlevel >= 4" },
                // cidlevel-5 | Detective Superintendent
                { "srifle_DMR_06_olive_F", "Mk14 7.62mm (Olive)", 0, -1, "call life_cidlevel >= 5" },
                { "srifle_DMR_06_camo_F", "Mk14 7.62mm (Camo)", 0, -1, "call life_cidlevel >= 5" },
                { "srifle_EBR_F", "Mk18 7.62mm", 0, -1, "call life_cidlevel >= 5" }
            };
            mags[] = {
                // cidlevel-1 | Detective Senior Constable
                { "11Rnd_45ACP_Mag", "Taser Cartridge", 0, -1, "call life_cidlevel >= 1" },
                { "10Rnd_9x21_Mag", "10Rnd 9mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "9Rnd_45ACP_Mag", "9Rnd .45mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP ACP Mag", 0, -1, "call life_cidlevel >= 1" },
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 0, -1, "call life_cidlevel >= 1" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_545x39_Mag_F", "30Rnd 5.45mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 0, -1, "call life_cidlevel >= 1" },
                { "30Rnd_65x39_caseless_mag", "30Rnd 6.5mm Mag", 0, -1, "call life_cidlevel >= 1" },
                // cidlevel-2 | Detective Sergeant
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Mag", 0, -1, "call life_cidlevel >= 2" },
                { "200Rnd_556x45_Box_F", "200Rnd 5.56mm Box", 0, -1, "call life_cidlevel >= 2" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 0, -1, "call life_cidlevel >= 2" },
                // cidlevel-3 | Detective Inspector
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 0, -1, "call life_cidlevel >= 3" },
                { "6Rnd_12Gauge_Slug", "12G Promet (Slug)", 0, -1, "call life_cidlevel >= 3" },
                { "6Rnd_12Gauge_Pellets", "12G Promet (Pellets)", 0, -1, "call life_cidlevel >= 3" },
                // cidlevel-4 | Detective Chief Inspector
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 0, -1, "call life_cidlevel >= 4" },
                // cidlevel-5 | Detective Superintendent
                { "10Rnd_762x54_Mag", "10Rnd 7.62mm Mag", 0, -1, "call life_cidlevel >= 5" }
            };
            accs[] = {
                // cidlevel-1 | Detective Senior Constable
                { "optic_Aco", "ACO (Red)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_ACO_grn", "ACO (Green)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Aco_smg", "ACO SMG (Red)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_ACO_grn_smg", "ACO SMG (Green)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Holosight_blk_F", "Mk17 Holosight (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "optic_Holosight_smg_blk_F", "Mk17 Holosight SMG (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "optic_Holosight", "Mk17 Holosight", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Holosight_smg", "Mk17 Holosight SMG", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Holosight_khk_F", "Mk17 Holosight (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Holosight_smg_khk_F", "Mk17 Holosight SMG (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Hamr", "RCO (Black)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Hamr_khk_F", "RCO (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_MRCO", "MRCO", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Arco_blk_F", "ARCO (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "optic_Arco", "ARCO (Brown)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Arco_arid_F", "ARCO (Arid)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Arco_lush_F", "ARCO (Lush)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_Arco_ghex_F", "ARCO (Green Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_ERCO_blk_F", "ERCO (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "optic_ERCO_khk_F", "ERCO (Khaki)", 0, -1, "call life_cidlevel >= 1" },
                { "optic_ERCO_snd_F", "ERCO (Sand)", 0, -1, "call life_cidlevel >= 1" },
                { "acc_flashlight", "Flashlight", 0, -1, "call life_cidlevel >= 1" },
                { "acc_pointer_IR", "IR Pointer", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_acp", ".45 Suppressor", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_L", "9mm Suppressor", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_M", "5.56mm Suppressor", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_570", "5.7mm Suppressor", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_58_blk_F", "5.8mm Suppressor (Black)", 0, -1, "call life_cidlevel >= 1 && PHX_DonatorLevel > 0" },
                { "muzzle_snds_58_hex_F", "5.8mm Suppressor (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_58_ghex_F", "5.8mm Suppressor (Green Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "muzzle_snds_H", "Sound Suppressor (6.5 mm)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_01_F_blk", "Bipod (Black)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_01_F_khk", "Bipod (Khaki)" , 0, -1, "call life_cidlevel >= 1" },
                { "bipod_01_F_mtp", "Bipod (MTP)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_01_F_snd", "Bipod (Sand)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_02_F_arid", "Bipod (Arid)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_02_F_blk", "Bipod (Black)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_02_F_hex", "Bipod (Hex)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_02_F_lush", "Bipod (Lush)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_02_F_tan", "Bipod (Brown)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_03_F_blk", "Bipod (Brown)", 0, -1, "call life_cidlevel >= 1" },
                { "bipod_03_F_oli", "Bipod (Olive)", 0, -1, "call life_cidlevel >= 1" },
                // cidlevel-2 | Detective Sergeant
                // cidlevel-3 | Detective Inspector
                // cidlevel-4 | Detective Chief Inspector
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth) Suppressor (Black)", 0, -1, "call life_cidlevel >= 4 && PHX_DonatorLevel > 0" },
                { "muzzle_snds_65_TI_hex_F", "6.5mm (Stealth) Suppressor (Hex)", 0, -1, "call life_cidlevel >= 4" },
                { "muzzle_snds_65_TI_ghex_F", "6.5mm (Stealth) Suppressor (Green Hex)", 0, -1, "call life_cidlevel >= 4" },
                { "muzzle_snds_B", "7.62mm Suppressor (Black)", 0, -1, "call life_cidlevel >= 4 && PHX_DonatorLevel > 0" },
                { "muzzle_snds_B_khk_F", "7.62mm Suppressor (Khaki)", 0, -1, "call life_cidlevel >= 4" },
                { "muzzle_snds_B_snd_F", "7.62mm Suppressor (Sand)", 0, -1, "call life_cidlevel >= 4" },
                { "muzzle_snds_B_arid_F", "7.62mm Suppressor (Arid)", 0, -1, "call life_cidlevel >= 4" },
                // cidlevel-5 | Detective Superintendent
                { "optic_DMS", "DMS", 0, -1, "true" },
                { "optic_AMS", "AMS (Black)", 0, -1, "call life_cidlevel >= 5 && PHX_DonatorLevel > 0" },
                { "optic_AMS_snd", "AMS (Sand)", 0, -1, "call life_cidlevel >= 5" },
                { "optic_AMS_khk", "AMS (Khaki)", 0, -1, "call life_cidlevel >= 5" }
            };
            items[] = {
                // cidlevel-1 | Detective Senior Constable
                { "ItemMap", "Map of Altis", 0, -1, "call life_cidlevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_cidlevel >= 1" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_cidlevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_cidlevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_cidlevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_cidlevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_cidlevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_cidlevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_cidlevel >= 1" }
                // cidlevel-2 | Detective Sergeant
                // cidlevel-3 | Detective Inspector
                // cidlevel-4 | Detective Chief Inspector
                // cidlevel-5 | Detective Superintendent
            };
        };

        class nhs_general_store {
            name = "NHS - General Store";
            conditions = "playerSide isEqualTo independent && call life_mediclevel >= 1";
            defaultTab = "weps";
            weps[] = {
                // mediclevel-1 | Student
                // mediclevel-2 | First Aider
                // mediclevel-3 | Paramedic
                // mediclevel-4 | Doctor
                // mediclevel-5 | General Practitioner
                // mediclevel-6 | Surgeon
                // mediclevel-7 | Consultant
                { "hgun_Pistol_Signal_F", "Starter Pistol", 0, -1, "call life_mediclevel >= 7" }
                // mediclevel-8 | Chief Medical Officer
            };
            mags[] = {
                // mediclevel-1 | Student
                // mediclevel-2 | First Aider
                // mediclevel-3 | Paramedic
                // mediclevel-4 | Doctor
                // mediclevel-5 | General Practitioner
                // mediclevel-6 | Surgeon
                // mediclevel-7 | Consultant
                { "6Rnd_GreenSignal_F", "6Rnd Green Single Mag", 0, -1, "call life_mediclevel >= 7" },
                { "6Rnd_RedSignal_F", "6Rnd Red Single Mag", 0, -1, "call life_mediclevel >= 7" }
                // mediclevel-8 | Chief Medical Officer
            };
            accs[] = {
                // mediclevel-1 | Student
                // mediclevel-2 | First Aider
                // mediclevel-3 | Paramedic
                // mediclevel-4 | Doctor
                // mediclevel-5 | General Practitioner
                // mediclevel-6 | Surgeon
                // mediclevel-7 | Consultant
                // mediclevel-8 | Chief Medical Officer
            };
            items[] = {
                // mediclevel-1 | Student
                { "ItemMap", "Map of Altis", 0, -1, "true" },
                { "ItemGPS", "Handheld GPS", 0, -1, "true" },
                { "ItemRadio", "Mobile Phone", 0, -1, "true" },
                { "ItemCompass", "Compass", 0, -1, "true" },
                { "ItemWatch", "Wrist Watch", 0, -1, "true" },
                { "Binocular", "Binoculars", 0, -1, "true" },
                { "Rangefinder", "Rangefinder", 0, -1, "true" },
                { "NVGoggles", "Night Vision Goggles", 0, -1, "true" },
                { "ToolKit", "Toolkit", 0, -1, "true" }
                // mediclevel-2 | First Aider
                // mediclevel-3 | Paramedic
                // mediclevel-4 | Doctor
                // mediclevel-5 | General Practitioner
                // mediclevel-6 | Surgeon
                // mediclevel-7 | Consultant
                // mediclevel-8 | Chief Medical Officer
            };
        };

        class havoc_general_store {
            name = "CSAT General Store";
            conditions = "playerSide isEqualTo east && call life_havoclevel >= 1";
            defaultTab = "weps";
            weps[] = {
                // havoclevel-1 | Recruit
                { "hgun_Rook40_F", "Rook 9mm", 2000, 10000, "call life_havoclevel >= 1" },
                { "hgun_PDW2000_F", "PDW2000 9mm", 4000, 2000, "call life_havoclevel >= 1" },
                { "SMG_02_F", "Sting 9mm", 5000, 2500, "call life_havoclevel >= 1" },
                { "arifle_SDAR_F", "SDAR 5.56mm", 20000, 10000, "call life_havoclevel >= 1" },
                { "arifle_AKS_F", "AKS-74U 5.45mm", 6000, 3000, "call life_havoclevel >= 1" },
                { "SMG_03_TR_hex", "ADR-97 TR 5.7mm", 6000, 3000, "call life_havoclevel >= 1" },
                { "arifle_CTAR_ghex_F", "CAR-95 5.8mm", 7000, 3500, "call life_havoclevel >= 1" },
                { "arifle_Mk20_plain_F", "Rubber Bullet Gun", 1000, 0, "call life_havoclevel >= 1" },
                // havoclevel-2 | Private
                { "hgun_Pistol_heavy_02_F", "Zubr .45 APC", 8000, 4000, "call life_havoclevel >= 2" },
                { "srifle_DMR_07_ghex_F", "CMR-76 6.5mm", 9000, 4500, "call life_havoclevel >= 2" },
                { "arifle_Katiba_F", "Katiba 6.5mm", 10000, 5000, "call life_havoclevel >= 2" },
                // havoclevel-3 | Corporal
                { "arifle_CTARS_ghex_F", "CAR-95-1 5.8mm", 11000, 55000, "call life_havoclevel >= 3" },
                { "arifle_ARX_ghex_F", "Type-115 6.5mm", 15000, 7500, "call life_havoclevel >= 3" },
                { "arifle_AKM_F", "AKM 7.62mm", 12500, 6250, "call life_havoclevel >= 3" },
                { "srifle_DMR_01_F", "Rahim 7.62mm", 17000, 8500, "call life_havoclevel >= 3" },
                // havoclevel-4 | Sergeant
                { "arifle_AK12U_lush_F", "AKU-12 7.62mm (Lush)", 18000, 9000, "call life_havoclevel >= 4" },
                { "arifle_AK12_lush_F", "AK-12 7.62mm", 20000, 10000, "call life_havoclevel >= 4" },
                { "srifle_DMR_06_olive_F", "Mk-14 7.62mm", 25000, 12500, "call life_havoclevel >= 4" },
                // havoclevel-5 | Staff Sergeant
                { "srifle_EBR_F", "Mk-18 7.62mm", 30000, 15000, "call life_havoclevel >= 5  || call life_hsflevel >= 1" },
                { "LMG_03_F", "LIM 5.56mm", 30000, 15000, "call life_havoclevel >= 5  || call life_hsflevel >= 1" },
                // havoclevel-6 | Lieutenant
                { "srifle_DMR_03_khaki_F", "MkI 7.62mm (Khaki)", 35000, 17500, "call life_havoclevel >= 6 || call life_hsflevel >= 1" },
                { "arifle_RPK12_lush_F", "RPK-12 7.62mm", 40000, 20000, "call life_havoclevel >= 6 || call life_hsflevel >= 1" },
                // havoclevel-7 | Captain
                { "srifle_DMR_04_Tan_F", "ASP-1 Kir", 65000, 32500, "call life_havoclevel >= 7 || call life_hsflevel >= 3" },
                { "srifle_DMR_02_camo_F", "MAR-10 .338", 70000, 32500, "call life_havoclevel >= 11" },
                // havoclevel-8 | Colonel
                { "LMG_Mk200_F", "Mk200 6.5mm", 75000, 37500, "call life_havoclevel >= 8"},
                { "srifle_DMR_05_hex_F", "Cyrus 9.3mm (Hex)", 80000, 40000, "call life_havoclevel >= 8" },
                { "launch_RPG32_green_F", "RPG-42", 100000, 50000, "call life_havoclevel >= 8" }
                // havoclevel-9 | Captain - NOT IN USE
                // havoclevel-10 | Brigadier - NOT IN USE
                // havoclevel-11 | Major - NOT IN USE
                // havoclevel-12 | Colonel - NOT IN USE
                // havoclevel-13 | General - NOT IN USE
            };
            mags[] = {
                // havoclevel-1 | Recruit
                { "10Rnd_9x21_Mag", "10Rnd 9mm Mag", 100, 50, "call life_havoclevel >= 1" },
                { "16Rnd_9x21_Mag", "16Rnd 9mm Mag", 200, 100, "call life_havoclevel >= 1" },
                { "30Rnd_9x21_Mag", "30Rnd 9mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets", 0, -1, "call life_havoclevel >= 1" },
                { "30Rnd_9x21_Mag_SMG_02", "30Rnd 9mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "9Rnd_45ACP_Mag", "9Rnd .45mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_45ACP_Mag_SMG_01", "30Rnd .45 ACP ACP Mag", 300, 150, "call life_havoclevel >= 1" },
                { "6Rnd_45ACP_Cylinder", "6Rnd .45 ACP Cylinder", 300, 150, "call life_havoclevel >= 1" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_545x39_Mag_F", "30Rnd 5.45mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_556x45_Stanag", "30Rnd 5.56mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "20Rnd_556x45_UW_mag", "20Rnd 5.56mm UW Mag", 300, 150, "call life_havoclevel >= 1" },
                { "50Rnd_570x28_SMG_03", "50Rnd 5.7mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_580x42_Mag_F", "30Rnd 5.8mm Mag", 300, 150, "call life_havoclevel >= 1"},
                { "30Rnd_65x39_caseless_green", "30Rnd 6.5mm Caseless Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_65x39_caseless_khaki_mag", "30Rnd 6.5mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_65x39_caseless_msbs_mag", "30Rnd 6.5mm Promet Mag", 300, 150, "call life_havoclevel >= 1" },
                { "30Rnd_65x39_caseless_mag", "30Rnd 6.5mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "20Rnd_650x39_Cased_Mag_F", "20Rnd 6.5mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "10Rnd_762x54_Mag", "10Rnd 7.62mm Mag", 600, 300, "call life_havoclevel >= 1" },
                { "20Rnd_762x51_Mag", "20Rnd 7.62mm Mag", 600, 300, "call life_havoclevel >= 1" },
                { "30Rnd_762x39_Mag_F", "30Rnd 7.62mm Mag (Black)", 600, 300, "call life_havoclevel >= 1" },
                { "30rnd_762x39_AK12_Arid_Mag_F", "30Rnd 7.62mm Mag (Arid)", 600, 300, "call life_havoclevel >= 1" },
                { "30rnd_762x39_AK12_Lush_Mag_F", "30Rnd 7.62mm Mag (Lush)", 600, 300, "call life_havoclevel >= 1" },
                { "150Rnd_556x45_Drum_Mag_F", "150Rnd 5.56mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "200Rnd_556x45_Box_F", "200Rnd 5.56mm Box", 300, 150, "call life_havoclevel >= 1" },
                { "100Rnd_580x42_Mag_F", "100Rnd 5.8mm Mag", 300, 150, "call life_havoclevel >= 1" },
                { "100Rnd_65x39_caseless_mag", "6.5 mm 100Rnd Mag", 600, 300, "call life_havoclevel >= 1" },
                { "100Rnd_65x39_caseless_khaki_mag", "6.5 mm 100Rnd Mag", 600, 300, "call life_havoclevel >= 1" },
                { "100Rnd_65x39_caseless_mag_Tracer", "6.5 mm 100Rnd Tracer (Red) Mag", 600, 300, "call life_havoclevel >= 1" },
                { "200Rnd_65x39_cased_Box", "200Rnd 6.5mm Box", 600, 300, "call life_havoclevel >= 1" },
                { "2Rnd_12Gauge_Slug", "12G (Slug)", 200, 100, "call life_havoclevel >= 1" },
                { "2Rnd_12Gauge_Pellets", "12G (Pellets)", 200, 100, "call life_havoclevel >= 1" },
                { "6Rnd_12Gauge_Slug", "12G Promet (Slug)", 200, 100, "call life_havoclevel >= 1" },
                { "6Rnd_12Gauge_Pellets", "12G Promet (Pellets)", 200, 100, "call life_havoclevel >= 1" },
                { "10Rnd_127x54_Mag", "10Rnd 12.7mm Mag", 1000, 500, "call life_havoclevel >= 1" },

                // havoclevel-2 | Private

                // havoclevel-3 | Corporal

                // havoclevel-4 | Sergeant

                // havoclevel-5 | Staff Sergeant

                // havoclevel-6 | Lieutenant
                { "75rnd_762x39_AK12_Lush_Mag_F", "75Rnd 7.62mm Mag (Lush)", 160, 80, "call life_havoclevel >= 6 || call life_hsflevel >= 1" },
                { "75rnd_762x39_AK12_Arid_Mag_F", "75Rnd 7.62mm Mag (Arid)", 160, 80, "call life_havoclevel >= 6 || call life_hsflevel >= 1" },
                // havoclevel-7 | Captain
                { "150Rnd_762x54_Box_Tracer", "150Rnd 7.62mm Mag", 10000, 100, "call life_havoclevel >= 7" },
                { "7Rnd_408_Mag", "10Rnd 12.7 Mag", 15000, 100, "call life_havoclevel >= 7" },
                { "10Rnd_338_Mag", ".338 LM 10Rnd Mag", 0, -1, "call life_havoclevel >= 7" },
                // havoclevel-8 | Colonel
                { "RPG32_F", "RPG-42 Rocket", 100000, 100, "call life_havoclevel >= 8" },
                { "10Rnd_93x64_DMR_05_Mag", "10Rnd 9.3mm Mag", 10000, 100, "call life_havoclevel >= 8" }
                // havoclevel-9 | Captain- NOT IN USE
                // havoclevel-10 | Brigadier- NOT IN USE
                // havoclevel-11 | Major- NOT IN USE
                // havoclevel-12 | Colonel- NOT IN USE
                // havoclevel-13 | General- NOT IN USE
            };
            accs[] = {
                // havoclevel-1 | Recruit
                { "optic_Aco_smg", "ACO SMG (Red)", 70, 35, "call life_havoclevel >= 1" },
                { "optic_Aco", "ACO SMG (Red)", 70, 35, "call life_havoclevel >= 1" },
                { "optic_Aco_grn", "ACO (Green)", 70, 35, "call life_havoclevel >= 1" },
                { "optic_Holosight", "Holosight", 70, 35, "call life_havoclevel >= 1" },
                { "optic_Holosight_lush_F", "Holosight (Lush)", 70, 35, "call life_havoclevel >= 1" },
                { "optic_Holosight_smg", "Mk17 Holosight SMG", 70, 35, "call life_havoclevel >= 1" },
                { "optic_MRCO", "MRCO", 100, 50, "call life_havoclevel >= 1" },
                { "acc_flashlight", "Flashlight", 50, 25, "call life_havoclevel >= 1" },
                { "acc_pointer_IR", "IR Pointer", 50, 25, "call life_havoclevel >= 1" },
                { "muzzle_snds_l", "9mm Suppressor", 400, 200, "call life_havoclevel >= 1" },
                { "muzzle_snds_58_wdm_F", "5.8mm Suppressor", 650, 325, "call life_havoclevel >= 1" },
                { "bipod_01_F_blk", "Bipod", 50, 25, "call life_havoclevel >= 1" },
                { "optic_Hamr", "RCO", 100, 50, "call life_havoclevel >= 1" },
                { "optic_Hamr_khk_F", "RCO (Khaki)", 100, 50, "call life_havoclevel >= 1" },
                { "optic_Arco_blk_F", "ARCO", 100, 50, "call life_havoclevel >= 1" },
                { "optic_Arco_lush_F", "ARCO (Lush)", 100, 50, "call life_havoclevel >= 1" },
                { "optic_ERCO_blk_F", "ERCO", 100, 50, "call life_havoclevel >= 1" },
                { "muzzle_snds_M", "5.56mm Suppressor", 300, 325, "call life_havoclevel >= 1" },

                // havoclevel-2 | Private
                { "muzzle_snds_H", "6.5mm Suppressor", 650, 325, "call life_havoclevel >= 2" },
                // havoclevel-3 | Corporal
                { "muzzle_snds_65_TI_blk_F", "6.5mm (Stealth) Suppressor", 650, 325, "call life_havoclevel >= 3" },
                // havoclevel-4 | Sergeant
                { "muzzle_snds_B", "7.62mm Suppressor", 1500, 7500, "call life_havoclevel >= 4 || call life_hsflevel >= 1" },
                { "muzzle_snds_B_lush_F", "7.62mm Suppressor (Lush)", 1500, 7500, "call life_havoclevel >= 4 || call life_hsflevel >= 1" },
                { "optic_DMS", "DMS", 25000, 12500, "call life_havoclevel >= 4 || call life_hsflevel >= 1" },
                // havoclevel-5 | Staff Sergeant
                { "optic_Yorris", "Yorris J2", 30, 15, "call life_havoclevel >= 5" },
                // havoclevel-6 | Lieutenant
                { "optic_AMS", "AMS (Black)", 35000, 17500, "call life_havoclevel >= 6 || call life_hsflevel >= 2" },
                { "optic_AMS_khk", "AMS (Khaki)", 35000, 17500, "call life_havoclevel >= 6 || call life_hsflevel >= 2" }
                // havoclevel-7 | Captain
                // havoclevel-8 | Colonel
                // havoclevel-9 | Captain- NOT IN USE
                // havoclevel-10 | Brigadier- NOT IN USE
                // havoclevel-11 | Major- NOT IN USE
                // havoclevel-12 | Colonel- NOT IN USE
                // havoclevel-13 | General- NOT IN USE
            };
            items[] = {
                // havoclevel-1 | Recruit
                { "ItemMap", "Map of Altis", 0, -1, "call life_havoclevel >= 1" },
                { "ItemGPS", "Handheld GPS", 0, -1, "call life_havoclevel >= 1" },
                { "ItemRadio", "Mobile Phone", 0, -1, "call life_havoclevel >= 1" },
                { "ItemCompass", "Compass", 0, -1, "call life_havoclevel >= 1" },
                { "ItemWatch", "Wrist Watch", 0, -1, "call life_havoclevel >= 1" },
                { "Binocular", "Binoculars", 0, -1, "call life_havoclevel >= 1" },
                { "Rangefinder", "Rangefinder", 0, -1, "call life_havoclevel >= 1" },
                { "NVGoggles_OPFOR", "Night Vision Goggles", 0, -1, "call life_havoclevel >= 1" },
                { "ToolKit", "Toolkit", 0, -1, "call life_havoclevel >= 1" },
                // havoclevel-2 | Lance Corporal
                // havoclevel-3 | Corporal
                // havoclevel-4 | Sergeant
                // havoclevel-5 | Staff Sergeant
                // havoclevel-6 | Lieutenant
                { "SmokeShellGreen", "Smoke Grenade", 0, -1, "call life_havoclevel >= 6" },
                // havoclevel-7 | Captain
                { "O_UavTerminal", "UAV Terminal", 0, -1, "call life_havoclevel >= 7" }
                // havoclevel-8 | Colonel
                // havoclevel-9 | Captain- NOT IN USE
                // havoclevel-10 | Brigadier- NOT IN USE
                // havoclevel-11 | Major- NOT IN USE
                // havoclevel-12 | Colonel- NOT IN USE
                // havoclevel-13 | General- NOT IN USE
            };
        };
    };

    class pja305 {};
};
