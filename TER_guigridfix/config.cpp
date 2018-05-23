class CfgPatches
{
	class TER_guigridfix
	{
		author="Terra";
		name="GUI_GRID Fix";
		url="";
		requiredAddons[]={A3_Ui_F,A3_Functions_F};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
	class TER
	{
		class GUI
		{
			class GUI_initNew {file = "TER_guigridfix\fnc\GUI_initNew.sqf"};
		};
	};
};

class RscButtonMenu;
class RscDebugConsole
{
	class controls 
	{
		class ButtonGUI
		{
			onLoad = "(_this select 0) ctrlShow false;";
		};
		class NewButtonGUI: RscButtonMenu
		{
			idc = 7300;
			onLoad = "if (is3den) then {(_this select 0) ctrlEnable false;};";
			onButtonClick = "[] spawn TER_fnc_GUI_initNew;";
			text="$STR_A3_RscDebugConsole_ButtonGUI";
			x="15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	}
};

