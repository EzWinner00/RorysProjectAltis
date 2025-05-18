/*
	@File: CfgLicenses.hpp
	@Author: Lewis Mackinnon
	@Description: Configures the settings behind the licenses.
*/

class CfgLicenses {
    // Driver and Vehicle Licencing
    class driver {
        variable = "driver";
        displayName = "Driving License";
        price = 32000;
        illegal = false;
        side = "civ";
    };
    class trucking {
        variable = "trucking";
        displayName = "Trucking License";
        price = 135750;
        illegal = false;
        side = "civ";
    };
    class boat {
        variable = "boat";
        displayName = "Boating License";
        price = 48000;
        illegal = false;
        side = "civ";
    };
    class pilot {
        variable = "pilot";
        displayName = "Piloting License";
        price = 250000;
        illegal = false;
        side = "civ";
    };
    class dive {
        variable = "dive";
        displayName = "Scuba License";
        price = 31465;
        illegal = false;
        side = "civ";
    };
    class home {
        variable = "home";
        displayName = "Homeowners License";
        price = 3500000;
        illegal = false;
        side = "civ";
    };
    // Go-Karting Store
    class karting {
        variable = "karting";
        displayName = "Karting License";
        price = 55750;
        illegal = false;
        side = "civ";
    };
    // Firearm Stores
    class gun {
        variable = "gun";
        displayName = "Handgun Certificate";
        price = 55350;
        illegal = false;
        side = "civ";
    };
    class SMG {
        variable = "SMG";
        displayName = "SMG Certificate";
        price = 135000;
        illegal = false;
        side = "civ";
    };
    // Civian Jobs
    class taximan {
        variable = "taximan";
        displayName = "Taximan License";
        price = 145000;
        illegal = false;
        side = "civ";
    };
    class repair {
        variable = "repair";
        displayName = "Altis Services License";
        price = 145000;
        illegal = false;
        side = "civ";
    };
    class lawyer {
        variable = "lawyer";
        displayName = "Lawyer License";
        price = 45000;
        illegal = false;
        side = "civ";
    };
    class news {
        variable = "news";
        displayName = "Altis News License";
        price = 225000;
        illegal = false;
        side = "civ";
    };  
    class SO1 {
        variable = "SO1";
        displayName = "SO1 Protection Officer";
        price = -1;
        illegal = false;
        side = "civ";
    };   
    // Processing Licenses 
    class cider {
        variable = "cider";
        displayName = "Cider Processing";
        price = 25000;
        illegal = false;
        side = "civ";
    };
    class tobacco {
        variable = "tobacco";
        displayName = "Tobacco Processing";
        name = "Tobacco Processing";
        price = 75750;
        illegal = false;
        side = "civ";
    };
    class copper {
        variable = "copper";
        displayName = "Copper Processing";
        price = 86550;
        illegal = false;
        side = "civ";
    };
    class iron {
        variable = "iron";
        displayName = "Iron Processing";
        price = 92250;
        illegal = false;
        side = "civ";
    };
    class silver {
        variable = "silver";
        displayName = "Silver Processing";
        price = 37750;
        illegal = false;
        side = "civ";
    };
    class silicon {
        variable = "silicon";
        displayName = "Silicon Processing";
        price = 122000;
        illegal = false;
        side = "civ";
    };
    class aluminium {
        variable = "aluminium";
        displayName = "Aluminium Processing";
        price = 100000;
        illegal = false;
        side = "civ";
    };
    class sand {
        variable = "sand";
        displayName = "Sand Processing";
        price = 92250;
        illegal = false;
        side = "civ";
    };
    class salt {
        variable = "salt";
        displayName = "Salt Processing";
        price = 115000;
        illegal = false;
        side = "civ";
    };
    class oil {
        variable = "oil";
        displayName = "Oil Processing";
        price = 450750;
        illegal = false;
        side = "civ";
    };
    class gem {
        variable = "gem";
        displayName = "Gem Processing";
        price = 335000;
        illegal = false;
        side = "civ";
    };
    class diamond {
        variable = "diamond";
        displayName = "Diamond Processing";
        price = 110250;
        illegal = false;
        side = "civ";
    };
    class uranium {
        variable = "uranium";
        displayName = "Uranium Processing";
        price = 1350000;
        illegal = true;
        side = "civ";
    };
    class marijuana {
        variable = "marijuana";
        displayName = "Weed Processing";
        price = 333000;
        illegal = true;
        side = "civ";
    };
    class heroin {
        variable = "heroin";
        displayName = "Heroin Processing";
        price = 440500;
        illegal = true;
        side = "civ";
    };
    class cocaine {
        variable = "cocaine";
        displayName = "Cocaine Processing";
        price = 6000000;
        illegal = true;
        side = "civ";
    };
    class meth {
        variable = "meth";
        displayName = "Meth Processing";
        price = 1100000;
        illegal = true;
        side = "civ";
    };
    class ecstasy {
        variable = "ecstasy";
        displayName = "Ecstasy Processing";
        price = 420500;
        illegal = true;
        side = "civ";
    };
    class moonshine {
        variable = "moonshine";
        displayName = "Moonshine Processing";
        price = 345000;
        illegal = true;
        side = "civ";
    };
    class multiDrug {
        variable = "multiDrug";
        displayName = "Multi-Drug Processing";
        price = 1005000;
        illegal = true;
        side = "civ";
    };
    class weapon {
        variable = "weapon";
        displayName = "Weapon Trader";
        price = 675000;
        illegal = true;
        side = "civ";
    };
    // Rebel Outposts
    class rebel {
        variable = "rebel";
        displayName = "Basic Rebel";
        price = 4000000;
        illegal = true;
        side = "civ";
    };
    class PMC {
        variable = "PMC";
        displayName = "Advanced Rebel";
        price = 12000000;
        illegal = true;
        side = "civ";
    };
    // Donator License
    class donator {
        variable = "donator";
        displayName = "Donator";
        price = -1;
        illegal = false;
        side = "civ";
    };
    // APC Authorisations
    class marksman {
        variable = "marksman";
        displayName = "Marksman Authorisation";
        price = -1;
        illegal = false;
        side = "cop";
    };
    class advancedDriving {
        variable = "marksman";
        displayName = "Advanced Driving Authorisation";
        price = -1;
        illegal = false;
        side = "cop";
    };
    class marineAsset  {
        variable = "marineAsset";
        displayName = "Marine Asset Authorisation";
        price = -1;
        illegal = false;
        side = "cop";
    };
    class ar2Darter  {
        variable = "ar2Darter";
        displayName = "AR-2 Darter Authorisation";
        price = -1;
        illegal = false;
        side = "cop";
    };
};
