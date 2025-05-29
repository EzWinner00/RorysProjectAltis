class RscCivEventDisplay {
    idd = 4900;
    duration = 999999;
    movingEnable = 0;
    enableSimulation = 1;
    fadein = 0;
    fadeout = 0;
    name = "RscCivEventDisplay";
    onLoad = "uiNamespace setVariable ['CivEventDisplay', _this select 0]";

    class controls {
        class TitleText: Life_RscText {
            idc = 4905;
            text = "Civilian Event In Progress";
            x = safeZoneX + safeZoneW * 0.75;
            y = safeZoneY + safeZoneH * 0.02;
            w = safeZoneW * 0.22;
            h = safeZoneH * 0.03;
            colorBackground[] = {0, 0, 0, 0.6};
            colorText[] = {1, 1, 0.5, 1}; // goldish
            sizeEx = "((safezoneH / 1.5) / 25)";
            font = "RobotoCondensedBold";
        };

        class FirstPlace: Life_RscText {
            idc = 4901;
            text = "#1: -";
            x = safeZoneX + safeZoneW * 0.75;
            y = safeZoneY + safeZoneH * 0.06;
            w = safeZoneW * 0.22;
            h = safeZoneH * 0.025;
            colorBackground[] = {0, 0, 0, 0.5};
            colorText[] = {1, 1, 1, 1};
            sizeEx = "((safezoneH / 1.8) / 25)";
            font = "RobotoCondensed";
        };

        class SecondPlace: Life_RscText {
            idc = 4903;
            text = "#2: -";
            x = safeZoneX + safeZoneW * 0.75;
            y = safeZoneY + safeZoneH * 0.09;
            w = safeZoneW * 0.22;
            h = safeZoneH * 0.025;
            colorBackground[] = {0, 0, 0, 0.5};
            colorText[] = {0.85, 0.85, 0.85, 1};
            sizeEx = "((safezoneH / 2.1) / 25)";
            font = "RobotoCondensed";
        };

        class ThirdPlace: Life_RscText {
            idc = 4904;
            text = "#3: -";
            x = safeZoneX + safeZoneW * 0.75;
            y = safeZoneY + safeZoneH * 0.12;
            w = safeZoneW * 0.22;
            h = safeZoneH * 0.025;
            colorBackground[] = {0, 0, 0, 0.5};
            colorText[] = {0.7, 0.7, 0.7, 1};
            sizeEx = "((safezoneH / 2.2) / 25)";
            font = "RobotoCondensed";
        };

        class TimerText: Life_RscText {
            idc = 4902;
            text = "Time Left: 300s";
            x = safeZoneX + safeZoneW * 0.75;
            y = safeZoneY + safeZoneH * 0.16;
            w = safeZoneW * 0.22;
            h = safeZoneH * 0.02;
            colorBackground[] = {0, 0, 0, 0.25};
            colorText[] = {0.8, 0.8, 0.8, 1};
            sizeEx = "((safezoneH / 2.4) / 25)";
            font = "RobotoCondensedLight";
        };
    };
};
