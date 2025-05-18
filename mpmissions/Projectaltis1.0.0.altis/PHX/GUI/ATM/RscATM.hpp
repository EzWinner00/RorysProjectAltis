class RscATM {
    idd = 2700;
    name= "RscATM";
    movingEnable = 0;
    enableSimulation = 1;

	class ControlsBackground{
		class Background:Life_RscText{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.43625;
			y = safeZoneY + safeZoneH * 0.32888889;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.44;
			colorBackground[] = {0.16,0.16,0.16,1};
		};

		class Top:Life_RscTitle{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.43625;
			y = safeZoneY + safeZoneH * 0.30777778;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.022;
			style = 0;
			text = "ATM";
			colorBackground[] = {0.09,0.09,0.09,1};
			colorText[] = {1,1,1,1};
			font = "RobotoCondensedLight";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
			moving = true;
		};
	};

	class Controls {
	class Input_Cash: PHXEdit {
		idc = 2702;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.41;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		text = "1";
		autocomplete = "";
		colorBackground[] = {0.09,0.09,0.09,1};
		colorDisabled[] = {0.16,0.16,0.16,1};
		colorSelection[] = {0.16,0.16,0.16,1};
		colorText[] = {1,1,1,1};
		font = "PuristaLight";
		sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
		onKeyUp = "_val = parseNumber ctrlText (_this select 0); private _slider = (findDisplay 2700 displayCtrl 2799); private _max = PHX_ATMCash; if (_max > 0) then {_slider sliderSetPosition (_val / _max * 100);};";
	};

	class AmountSlider {
		idc = 2799;
		type = 43;
		style = 1024;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.438;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.015;
		color[] = {0.09,0.09,0.09,1};
		colorActive[] = {1,1,1,1};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		tooltip = "Select % of your bank to fill amount";
		onSliderPosChanged = "disableSerialization; private _slider = _this select 0; private _percent = sliderPosition _slider; private _amount = round (PHX_ATMCash * (_percent / 100)); ctrlSetText [2702, format['%1', _amount toFixed 0]];";
	};

	class Withdraw: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.458;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "WITHDRAW";
		onButtonClick = "[] call PHX_fnc_bankWithdraw";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
		font = "PuristaLight";
		sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
	};

	class DepositOne: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.485;
		w = safeZoneW * 0.0275;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "50k";
		onButtonClick = "[50000] call PHX_fnc_bankWithdraw;";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class DepositTwo: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.478125;
		y = safeZoneY + safeZoneH * 0.485;
		w = safeZoneW * 0.0275;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "100k";
		onButtonClick = "[100000] call PHX_fnc_bankWithdraw;";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class DepositThree: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.50625;
		y = safeZoneY + safeZoneH * 0.485;
		w = safeZoneW * 0.0275;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "250k";
		onButtonClick = "[250000] call PHX_fnc_bankWithdraw;";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class DepositFour: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.534375;
		y = safeZoneY + safeZoneH * 0.485;
		w = safeZoneW * 0.028125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "500k";
		onButtonClick = "[500000] call PHX_fnc_bankWithdraw;";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class Deposit: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.512;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "DEPOSIT";
		onButtonClick = "[] call PHX_fnc_bankDeposit";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class DepositAll: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.538;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "DEPOSIT ALL";
		tooltip = "Deposits all of your cash!";
		onButtonClick = "[PHX_Cash] call PHX_fnc_bankDeposit";
		borderSize = 0;
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class Players: PHXCombos {
		idc = 2703;
		x = safeZoneX + safeZoneW * 0.45;
		y = safeZoneY + safeZoneH * 0.565;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02333334;
	};

	class Tranfer: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.449375;
		y = safeZoneY + safeZoneH * 0.621;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "TRANSFER";
		onButtonClick = "[] call PHX_fnc_wireTransfer";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
		font = "PuristaLight";
		sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
	};




	class Withdraw_Gang: Life_RscButton {
		idc = 2705;
		x = safeZoneX + safeZoneW * 0.450625;
		y = safeZoneY + safeZoneH * 0.648;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "WITHDRAW GROUP";
		onButtonClick = "[] call PHX_fnc_gangWithdraw";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class Deposit_Gang: Life_RscButton {
		idc = 2706;
		x = safeZoneX + safeZoneW * 0.45125;
		y = safeZoneY + safeZoneH * 0.708;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "DEPOSIT GROUP";
		onButtonClick = "[] call PHX_fnc_gangDeposit";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};

	class Transaction: Life_RscButton {
		idc = -1;
		x = safeZoneX + safeZoneW * 0.45125;
		y = safeZoneY + safeZoneH * 0.735;
		w = safeZoneW * 0.1125;
		h = safeZoneH * 0.02222223;
		style = 2;
		text = "TRANSACTIONS";
		onButtonClick = "[] call PHX_fnc_openTransactions";
		colorBackground[] = {0,0,0,1};
		colorText[] = {1,1,1,1};
	};



		class Icons:Life_RscStructuredText{
			idc = 2701;
			x = safeZoneX + safeZoneW * 0.453125;
			y = safeZoneY + safeZoneH * 0.3353334;
			w = safeZoneW * 0.106875;
			h = safeZoneH * 0.06555556;
			style = 2;
			text = "";
			font = "RobotoCondensedLight";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};
		};

	class IconsGang: Life_RscStructuredText {
		idc = 2707;
		x = safeZoneX + safeZoneW * 0.453125;
		y = safeZoneY + safeZoneH * 0.675;
		w = safeZoneW * 0.106875;
		h = safeZoneH * 0.03;
		style = 2;
		text = "";
		size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		colorBackground[] = {1,1,1,0};
	};

		class Close:Life_RscButton{
			idc = -1;
			x = safeZoneX + safeZoneW * 0.558125;
			y = safeZoneY + safeZoneH * 0.30777778;
			w = safeZoneW * 0.015625;
			h = safeZoneH * 0.02222223;
            style = ST_KEEP_ASPECT_RATIO + ST_CENTER + ST_PICTURE;
            text = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
            onButtonClick = "closeDialog 0;";
            colorBackground[] = {0,0,0,1};
            colorFocused[] = {0.09,0.09,0.09,1};
            colorBackgroundActive[] = {0.03,0.03,0.03,1};
            sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
};