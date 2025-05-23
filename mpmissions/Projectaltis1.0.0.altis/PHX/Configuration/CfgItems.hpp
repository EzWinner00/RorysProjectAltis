/*
	@File: CfgItems.hpp
	@Author: Jack "Scarso" Farhall & Lewis Mackinnon
	@description: Configures the settings behind the virtual items.
*/

// Got ya'

class CfgItems {
    // Drink Items
    class waterBottle {
        variable = "waterBottle";
        displayName = "Water Bottle";
        weight = 1;
        buyPrice = 350;
        sellPrice = 200;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 75;
        };
        icon = "ico_waterBottle.paa";
        description = "Enjoy a nice still drink to quench your thirst.";
        conditions = "";
    };
    class waterCup {
        variable = "waterCup";
        displayName = "Water Cup";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 30;
        };
        icon = "ico_waterBottle.paa";
        description = "Enjoy a nice still drink to quench your thirst that comes from a simple machine.";
        conditions = "";
    };
    class coffee {
        variable = "coffee";
        displayName = "Coffee";
        weight = 1;
        buyPrice = 350;
        sellPrice = 150;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 45;
        };
        icon = "ico_coffee.paa";
        description = "A black drink packed with energy and bitterness.";
        conditions = "";
    };
    class weedCoffee {
        variable = "weedCoffee";
        displayName = "Cannabis Coffee";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 100;
        };
        icon = "ico_coffee.paa";
        description = "Google says it's a thing.";
        conditions = "";
    };
    class tea {
        variable = "tea";
        displayName = "Tea";
        weight = 1;
        buyPrice = 350;
        sellPrice = 150;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 60;
        };
        icon = "ico_coffee.paa";
        description = "A gorgeous English drink that is simply the best.";
        conditions = "";
    };
    class redgull {
        variable = "redgull";
        displayName = "Redgull";
        weight = 1;
        buyPrice = 3500;
        sellPrice = 1750;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 40;
        };
        icon = "ico_redgull.paa";
        description = "Enery drink that certainly doesn't give you wings. Very high in sugar.";
        conditions = "";
    };
    class beer {
        variable = "beer";
        displayName = "Beer";
        weight = 1;
        buyPrice = 1575;
        sellPrice = 875;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 20;
        };
        icon = "ico_beer.paa";
        description = "A pint of beer, ready to be drunk.";
        conditions = "";
    };
    class cider {
        variable = "cider";
        displayName = "Cider";
        weight = 1;
        buyPrice = 1150;
        sellPrice = 875;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 30;
        };
        icon = "ico_cider.paa";
        description = "Cider is an alcoholic beverage made from the fermented juice of apples.";
        conditions = "";
    };
    class gin {
        variable = "gin";
        displayName = "Gin";
        weight = 2;
        buyPrice = 2815;
        sellPrice = 1550;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 30;
        };
        icon = "ico_gin.paa";
        description = "Gin is liquor which derives its predominant flavour from juniper berries.";
        conditions = "";
    };
    class vodka {
        variable = "vodka";
        displayName = "Vodka";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 1355;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 30;
        };
        icon = "ico_vodka.paa";
        description = "Vodka is a distilled beverage composed primarily of water and ethanol.";
        conditions = "";
    };
    class whiskey {
        variable = "whiskey";
        displayName = "Whiskey";
        weight = 2;
        buyPrice = 2900;
        sellPrice = 1875;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 30;
        };
        icon = "ico_whiskey.paa";
        description = "Whisky or whiskey is a type of distilled alcoholic beverage made from fermented grain mash.";
        conditions = "";
    };

    // Food Items
    class apple {
        variable = "apple";
        displayName = "Apple";
        weight = 1;
        buyPrice = 400;
        sellPrice = 350;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Both"};
            value = 22;
        };
        icon = "ico_apple.paa";
        description = "Farmed and sold! Simple as that. Or processed into cider...";
        conditions = "";
    };
    class peach {
        variable = "peach";
        displayName = "Peach";
        weight = 1;
        buyPrice = 400;
        sellPrice = 365;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Both"};
            value = 30;
        };
        icon = "ico_peach.paa";
        description = "Farmed and sold! Simple as that. But not processed into cider...";
        conditions = "";
    };
    class lollipop {
        variable = "lollipop";
        displayName = "Lollipop";
        weight = 1;
        buyPrice = 50;
        sellPrice = 5;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 10;
        };
        icon = "ico_lollipop.paa";
        description = "A little ""get-well"" gift from the NHS after treatment.";
        conditions = "";
    };
    class doughnut {
        variable = "doughnut";
        displayName = "Doughnut";
        weight = 1;
        buyPrice = 280;
        sellPrice = 190;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 30;
        };
        icon = "ico_donuts.paa";
        description = "Don't expect the market to have any left in stock, the police buy them all!";
        conditions = "";
    };
    class mre {
        variable = "mre";
        displayName = "MRE";
        weight = 2;
        buyPrice = 2225;
        sellPrice = 1750;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 80;
        };
        icon = "ico_mre.paa";
        description = "Food packs issued to all CSAT members.";
        conditions = "";
    };
    class tbacon {
        variable = "tbacon";
        displayName = "Tactical Bacon";
        weight = 2;
        buyPrice = 2225;
        sellPrice = 1750;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 80;
        };
        icon = "ico_tbacon.paa";
        description = "Canned bacon, nobody thought it would taste so good. It's also tactical!";
        conditions = "";
    };
    class chips {
        variable = "chips";
        displayName = "Chips";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 780;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 60;
        };
        icon = "ico_chips.paa";
        description = "Purchased from any ""Red Buger"" stand and made from Irish potatos!";
        conditions = "";
    };
    class burger {
        variable = "burger";
        displayName = "Burger";
        weight = 2;
        buyPrice = 1650;
        sellPrice = 800;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 90;
        };
        icon = "ico_burger.paa";
        description = "Purchased from any ""Red Buger"" stand and made from 100% real h-beef.";
        conditions = "";
    };

    // Hunting Items
    class rabbit_raw {
        variable = "rabbit_raw";
        displayName = "Raw Rabbit";
        weight = 2;
        buyPrice = -1;
        sellPrice = 120;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_rabbitRaw.paa";
        description = "Collected from killing those poor rabbits.";
        conditions = "";
    };
    class rabbit_cooked {
        variable = "rabbit_cooked";
        displayName = "Cooked Rabbit";
        weight = 1;
        buyPrice = 1700;
        sellPrice = 900;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 50;
        };
        icon = "ico_rabbit.paa";
        description = "Just cooked from raw rabbits at the public cookhouse.";
        conditions = "";
    };
    class hen_raw {
        variable = "hen_raw";
        displayName = "Raw Hen";
        weight = 2;
        buyPrice = -1;
        sellPrice = 130;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_wholeChickenRaw.paa";
        description = "Collected from killing those poor hens.";
        conditions = "";
    };
    class hen_cooked {
        variable = "hen_cooked";
        displayName = "Cooked Hen";
        weight = 1;
        buyPrice = 1600;
        sellPrice = 820;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 20;
        };
        icon = "ico_wholeChicken.paa";
        description = "Just cooked from raw hens at the public cookhouse.";
        conditions = "";
    };
    class rooster_raw {
        variable = "rooster_raw";
        displayName = "Raw Rooster";
        weight = 2;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_chickenDrumstickRaw.paa";
        description = "Collected from killing those poor roosters.";
        conditions = "";
    };
    class rooster_cooked {
        variable = "rooster_cooked";
        displayName = "Cooked Rooster";
        weight = 1;
        buyPrice = 1775;
        sellPrice = 1650;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 20;
        };
        icon = "ico_chickenDrumstick.paa";
        description = "Just cooked from raw roosters at the public cookhouse.";
        conditions = "";
    };
    class sheep_raw {
        variable = "sheep_raw";
        displayName = "Raw Sheep";
        weight = 2;
        buyPrice = -1;
        sellPrice = 150;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_lambChopRaw.paa";
        description = "Collected from killing those poor sheep.";
        conditions = "";
    };
    class sheep_cooked {
        variable = "sheep_cooked";
        displayName = "Cooked Sheep";
        weight = 1;
        buyPrice = 1600;
        sellPrice = 1320;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 20;
        };
        icon = "ico_lambChop.paa";
        description = "Just cooked from raw sheep at the public cookhouse.";
        conditions = "";
    };
    class goat_raw {
        variable = "goat_raw";
        displayName = "Raw Goat";
        weight = 2;
        buyPrice = -1;
        sellPrice = 150;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_muttonLegRaw.paa";
        description = "Collected from killing those poor goats.";
        conditions = "";
    };
    class goat_cooked {
        variable = "goat_cooked";
        displayName = "Cooked Goat";
        weight = 1;
        buyPrice = 1780;
        sellPrice = 1050;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 20;
        };
        icon = "ico_muttonLeg.paa";
        description = "Just cooked from raw goat at the public cookhouse.";
        conditions = "";
    };

    // Fished Items
    class salema_raw {
        variable = "salema_raw";
        displayName = "Raw Salema";
        weight = 2;
        buyPrice = -1;
        sellPrice = 420;
        illegal = "fish";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_salemaRaw.paa";
        description = "A small fish that can be found close to shore anywhere around the island.";
        conditions = "";
    };
    class salema_cooked {
        variable = "salema_cooked";
        displayName = "Cooked Salema";
        weight = 1;
        buyPrice = 2000;
        sellPrice = 955;
        illegal = true;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 30;
        };
        icon = "ico_cookedFish.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };
    class ornate_raw {
        variable = "ornate_raw";
        displayName = "Raw Ornate";
        weight = 2;
        buyPrice = -1;
        sellPrice = 300;
        illegal = "fish";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_ornateRaw.paa";
        description = "A small-medium fish that can be found in the likes of bays and gulfs.";
        conditions = "";
    };
    class ornate_cooked {
        variable = "ornate_cooked";
        displayName = "Cooked Ornate";
        weight = 1;
        buyPrice = 1750;
        sellPrice = 820;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 40;
        };
        icon = "ico_cookedFish.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };
    class mackerel_raw {
        variable = "mackerel_raw";
        displayName = "Raw Mackerel";
        weight = 2;
        buyPrice = -1;
        sellPrice = 660;
        illegal = "fish";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_mackerelRaw.paa";
        description = "A small-medium fish that can be found in the likes of bays and gulfs.";
        conditions = "";
    };
    class mackerel_cooked {
        variable = "mackerel_cooked";
        displayName = "Cooked Mackerel";
        weight = 1;
        buyPrice = 3175;
        sellPrice = 1980;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 50;
        };
        icon = "ico_cookedFish.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };
    class tuna_raw {
        variable = "tuna_raw";
        displayName = "Raw Tuna";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2350;
        illegal = "fish";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_tunaRaw.paa";
        description = "A large fish that can be found in the a long-way out from shore.";
        conditions = "";
    };
    class tuna_cooked {
        variable = "tuna_cooked";
        displayName = "Cooked Tuna";
        weight = 2;
        buyPrice = 5500;
        sellPrice = 4820;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 60;
        };
        icon = "ico_cookedFish.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };
    class mullet_raw {
        variable = "mullet_raw";
        displayName = "Raw Mullet";
        weight = 2;
        buyPrice = -1;
        sellPrice = 500;
        illegal = "fish";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_tunaRaw.paa";
        description = "A large fish that can be found in the a long-way out from shore.";
        conditions = "";
    };
    class mullet_cooked {
        variable = "mullet_cooked";
        displayName = "Cooked Mullet";
        weight = 1;
        buyPrice = 2560;
        sellPrice = 1050;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 70;
        };
        icon = "ico_cookedFish.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };
    class catshark_raw {
        variable = "catshark_raw";
        displayName = "Raw Catshark";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1200;
        illegal = "fish";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_catsharkRaw.paa";
        description = "A large shark-like that can be found in the a long-way out from shore.";
        conditions = "";
    };
    class catshark_cooked {
        variable = "catshark_cooked";
        displayName = "Cooked Catshark";
        weight = 1;
        buyPrice = 3470;
        sellPrice = 2355;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 100;
        };
        icon = "ico_cookedFish.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };
    class turtle_raw {
        variable = "turtle_raw";
        displayName = "Raw Turtle";
        weight = 12;
        buyPrice = -1;
        sellPrice = 15000;
        illegal = "turtle";
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_turtleRaw.paa";
        description = "An extremely rare animal that can be found in specifc areas of the water.";
        conditions = "";
    };
    class turtle_cooked {
        variable = "turtle_cooked";
        displayName = "Turtle Soup";
        weight = 6;
        buyPrice = -1;
        sellPrice = 32755;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Hunger"};
            value = 60;
        };
        icon = "ico_turtleRaw.paa";
        description = "Simply cook the raw one to get this one!";
        conditions = "";
    };

    // HAVOC Visas
    class havoc_entry {
        variable = "havocentry";
        displayName = "CSAT Identity Card";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_entryvisa.paa";
        description = "Used by CSAT Members to identify themselves.";
        conditions = "";
    };
    class havoc_work {
        variable = "havocwork";
        displayName = "CSAT Propaganda";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_workvisa.paa";
        description = "Some information in regards to the aims of CSAT and how they plan to gain control back over the island after the defeat of HAVOC.";
        conditions = "";
    };

    // Medical Items
    class morphine {
        variable = "morphine";
        displayName = "Morphine";
        weight = 1;
        buyPrice = 18000;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_morphine.paa";
        description = "A pain killer that gets the adrenaline pumping. Has a similar effect to redgull. Slightly less effective compared to other painkillers.";
        conditions = "";
    };
    class fentanyl {
        variable = "fentanyl";
        displayName = "Fentanyl";
        weight = 1;
        buyPrice = 32080;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_fentanyl.paa";
        description = "A pain killer that should only be used in life or death situations.";
        conditions = "";
    };
    class Saline {
        variable = "Saline";
        displayName = "Saline";
        weight = 1;
        buyPrice = 5300;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_saline.paa";
        description = "A mixture of salt and water used for treating wounds.";
        conditions = "";
    };
    class Bandage {
        variable = "Bandage";
        displayName = "Bandage";
        weight = 1;
        buyPrice = 1575;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_bandage.paa";
        description = "A strip of fabric used especially to cover, dress, and bind up wounds.";
        conditions = "";
    };
    class Gauze {
        variable = "Gauze";
        displayName = "Gauze";
        weight = 1;
        buyPrice = 1575;
        sellPrice = -1;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_gauze.paa";
        description = "A very thin, light cloth, used to make clothing, to cover cuts.";
        conditions = "";
    };
    class firstaidkit_virtual {
        variable = "firstaidkit_virtual";
        displayName = "First Aid Kit";
        weight = 3;
        buyPrice = 10335;
        sellPrice = 6625;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_firstaidkit.paa";
        description = "Allows you to patch up basic wounds and make yourself feel better.";
        conditions = "";
    };
    class medikit_virtual {
        variable = "medikit_virtual";
        displayName = "Medikit";
        weight = 5;
        buyPrice = 29420;
        sellPrice = 14000;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_medikit.paa";
        description = "Allows you to patch up serious wounds and help save lives.";
        conditions = "";
    };
    class blood_bag {
        variable = "blood_bag";
        displayName = "Blood Bag";
        weight = 2;
        buyPrice = 4600;
        sellPrice = 4000;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_bloodbag.paa";
        description = "Allows you to extend the time it'll take someone to bleedout...";
        conditions = "";
    };

    // Harvesting Items
    class pickaxe {
        variable = "pickaxe";
        displayName = "Pickaxe";
        weight = 2;
        buyPrice = 3000;
        sellPrice = 1500;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_pickaxe.paa";
        description = "A sturdy tool that allows you to harvest almost any mineral.";
        conditions = "";
    };
    class shovel {
        variable = "shovel";
        displayName = "Shovel";
        weight = 2;
        buyPrice = 2250;
        sellPrice = 1000;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_shovel.paa";
        description = "A sturdy tool that allows you to collect large amounts of sand.";
        conditions = "";
    };
    class stick {
        variable = "stick";
        displayName = "Stick";
        weight = 1;
        buyPrice = 30;
        sellPrice = 15;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_shovel.paa"; // NEEDS CHANGED
        description = "A straight wooden stick that can be used to craft harvesting tools such as a pickaxe or a shovel.";
        conditions = "";
    };

    // Fuel Storage
    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "Empty Fuel Can";
        weight = 2;
        buyPrice = 250;
        sellPrice = 10;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_fuelEmpty.paa";
        description = "A empty can that was once filled with fuel.";
        conditions = "";
    };
    class fuelFull {
        variable = "fuelFull";
        displayName = "Full Fuel Can";
        weight = 3;
        buyPrice = 6900;
        sellPrice = 5300;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_fuel.paa";
        description = "A can filled with fuel.";
        conditions = "";
    };
    class siphonpump {
        variable = "siphonpump";
        displayName = "Fuel Siphon Pump";
        weight = 2;
        buyPrice = 14000;
        sellPrice = 10000;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_siphon.paa";
        description = "A tool used to siphon the fuel from tanks. (Rembmer an empty can to fill up!)";
        conditions = "";
    };

    // Misc. Items
    class fishingNet {
        variable = "fishingNet";
        displayName = "Fishing Net";
        weight = 2;
        buyPrice = 250;
        sellPrice = 10;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_fishingnet.paa";
        description = "Gives you the ability to catch fish while in a boat.";
        conditions = "";
    };
    class zipties {
        variable = "zipties";
        displayName = "Zipties";
        weight = 2;
        buyPrice = 12500;
        sellPrice = 8000;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ziptie.paa";
        description = "These can be used to restrain people.";
        conditions = "";
    };
    class blindfold {
        variable = "blindfold";
        displayName = "Blindfold";
        weight = 2;
        buyPrice = `35000;
        sellPrice = 5000;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_blindfold.paa";
        description = "These can be used to block a restrained person's vision.";
        conditions = "";
    };
    class breathalyser {
        variable = "breathalyser";
        displayName = "Breathalyser";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_breathalyser.paa";
        description = "A piece of equipment used to check people's blood-alcohol level.";
        conditions = "";
    };
    class spikeStrip {
        variable = "spikeStrip";
        displayName = "Police Stinger";
        weight = 5;
        buyPrice = 0;
        sellPrice = 0;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_spikeStrip.paa";
        description = "Police can get these and place them on the road to bring vehicles to a stop, avoid them!";
        conditions = "";
    };
    class gpstracker {
        variable = "gpstracker";
        displayName = "GPS Tracker";
        weight = 4;
        buyPrice = 30500;
        sellPrice = 4500;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_gpstracker.paa";
        description = "This can be attached to your vehicle to track it.";
        conditions = "";
    };
    class gpstracker_remover {
        variable = "gpstracker_remover";
        displayName = "GPS Tracker Removal Kit";
        weight = 3;
        buyPrice = 13225;
        sellPrice = 7500;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_gpstracker.paa";
        description = "This can be used to find and remove GPS Trackers from vehicles.";
        conditions = "";
    };
    class lockpick {
        variable = "lockpick";
        displayName = "Lockpick";
        weight = 3;
        buyPrice = 7594;
        sellPrice = 5500;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_lockpick.paa";
        description = "These can be used to break into a car, they can be very brittle at times so good luck!";
        conditions = "";
    };
    class boltcutter {
        variable = "boltcutter";
        displayName = "Boltcutter";
        weight = 6;
        buyPrice = 425000;
        sellPrice = 370000;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_boltCutter.paa";
        description = "Used to break into more secure areas such as government facilties. NOT YET try a bikelock!";
        conditions = "";
    };
    class hackingdevice {
        variable = "hackingdevice";
        displayName = "Hacking Device";
        weight = 14;
        buyPrice = 763950;
        sellPrice = 475000;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_hackingdevice.paa";
        description = "Used to break into more secure areas such as government facilties.";
        conditions = "";
    };
    class drill {
        variable = "drill";
        displayName = "Industrial Drill";
        weight = 15;
        buyPrice = 485000;
        sellPrice = 340000;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_blastingcharge.paa";
        description = "This drill is used to open the vault within Armoury.";
        conditions = "";
    };
    class lock {
        variable = "lock";
        displayName = "Lock";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_lock.paa";
        description = "A secure lock that can be used to secure the likes of the police armoury doors.";
        conditions = "";
    };
    class scratchcard {
        variable = "scratchcard";
        displayName = "Scratchcard";
        weight = 1;
        buyPrice = 18000;
        sellPrice = 3000;
        illegal = false;
        save = true;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_scratchcard.paa";
        description = "Buy these and have a chance of making a massive amount of profit.";
        conditions = "";
    };

    // Run Items
    class corn {
        variable = "corn";
        displayName = "Corn";
        weight = 4;
        buyPrice = -1;
        sellPrice = 4250;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_corn.paa";
        description = "Can be found on the corn fields of Altis. Popped into pop corn.";
        conditions = "";
    };
    class tobacco {
        variable = "tobacco";
        displayName = "Tobacco";
        weight = 4;
        buyPrice = -1;
        sellPrice = 3650;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_tobacco.paa";
        description = "Leaves of the tobacco plant use to make a cigars and cigarettes.";
        conditions = "";
    };
    class cigarette {
        variable = "cigarette";
        displayName = "Cigarette";
        weight = 2;
        buyPrice = 8745;
        sellPrice = 5300;
        illegal = "cigarette";
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_cigarette.paa";
        description = "A hand rolled cigarette made with the finest tobacco on Altis.";
        conditions = "";
    };
    class cigar {
        variable = "cigar";
        displayName = "Cigar";
        weight = 2;
        buyPrice = 8960;
        sellPrice = 5475;
        illegal = "cigar";
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_cigar.paa";
        description = "The finest of hand made cigars, the CSAT Colonel would approve.";
        conditions = "";
    };
    class coral {
        variable = "coral";
        displayName = "Coral";
        weight = 5;
        buyPrice = -1;
        sellPrice = 5420;
        illegal = "coral";
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_coral.paa";
        description = "Coral can be found along the shoreline of Altis.";
        conditions = "";
    };
    class copper_ore {
        variable = "copper_ore";
        displayName = "Copper Ore";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1050;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_copperOre.paa";
        description = "Ore mined from the copper mine and can be processed at a processing site.";
        conditions = "";
    };
    class copper_bar {
        variable = "copper_bar";
        displayName = "Copper Bar";
        weight = 2;
        buyPrice = 7565;
        sellPrice = 4375;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_copper.paa";
        description = "A bar processed from a processing site using raw ore.";
        conditions = "";
    };
    class silver_ore {
        variable = "silver_ore";
        displayName = "Silver Ore";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1317;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_silverore.paa";
        description = "Ore mined from the silver mine and can be processed at a processing site.";
        conditions = "";
    };
    class silver_bar {
        variable = "silver_bar";
        displayName = "Silver Bar";
        weight = 2;
        buyPrice = 7540;
        sellPrice = 4435;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_silver.paa";
        description = "A bar processed from a processing site using raw ore.";
        conditions = "";
    };
    class iron_ore {
        variable = "iron_ore";
        displayName = "Iron Ore";
        weight = 4;
        buyPrice = -1;
        sellPrice = 2033;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_ironOre.paa";
        description = "Ore mined from the iron mine and can be processed at a processing site.";
        conditions = "";
    };
    class iron_bar {
        variable = "iron_bar";
        displayName = "Iron Bar";
        weight = 2;
        buyPrice = 12017;
        sellPrice = 6100;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_iron.paa";
        description = "A bar processed from a processing site using raw ore.";
        conditions = "";
    };
    class sand {
        variable = "sand";
        displayName = "Sand";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1050;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_sand.paa";
        description = "Material excavated from the sand mine which can be processed into glass at a processing site.";
        conditions = "";
    };
    class glass {
        variable = "glass";
        displayName = "Glass";
        weight = 1;
        buyPrice = 9605;
        sellPrice = 7520;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_glass.paa";
        description = "A pane processed from a processing site using sand.";
        conditions = "";
    };
    class unrefined_salt {
        variable = "unrefined_salt";
        displayName = "Unrefined Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1733;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_saltUnprocessed.paa";
        description = "Salt mined from the salt mine and can be processed at a processing site.";
        conditions = "";
    };
    class refined_salt {
        variable = "refined_salt";
        displayName = "Refined Salt";
        weight = 2;
        buyPrice = 9700;
        sellPrice = 6125;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_saltProcessed.paa";
        description = "A block processed from a processing site using salt.";
        conditions = "";
    };
    class bauxite {
        variable = "bauxite";
        displayName = "Bauxite";
        weight = 4;
        buyPrice = -1;
        sellPrice = 1533;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_bauxite.paa";
        description = "Mined from the aluminium mine and can be processed at a processing site.";
        conditions = "";
    };
    class aluminium {
        variable = "aluminium";
        displayName = "Aluminium Bar";
        weight = 2;
        buyPrice = 12050;
        sellPrice = 6540;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_aluminium.paa";
        description = "A bar processed from a processing site using bauxite.";
        conditions = "";
    };
    class quartz {
        variable = "quartz";
        displayName = "Quartz";
        weight = 4;
        buyPrice = -1;
        sellPrice = 1533;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_quartz.paa";
        description = "The pure form of silicon. Can be processed into silicon at the silicon processor.";
        conditions = "";
    };
    class silicon {
        variable = "silicon";
        displayName = "Silicon";
        weight = 2;
        buyPrice = 12713;
        sellPrice = 7150;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_silicon.paa";
        description = "A refined form of quartz that can be sold for a great deal.";
        conditions = "";
    };
    class unrefined_oil {
        variable = "unrefined_oil";
        displayName = "Unrefined Oil";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3250;
        illegal = "oil";
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_oilUnprocessed.paa";
        description = "Unprocessed oil. Can be processed to processed oil at the Oil Processor and then sold at the Oil Trader.";
        conditions = "";
    };
    class refined_oil {
        variable = "refined_oil";
        displayName = "Refined Oil";
        weight = 4;
        buyPrice = -1;
        sellPrice = 11950;
        illegal = "oil";
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_oilProcessed.paa";
        description = "Can be created from unprocessed oil at the oil processor. Sold at the oil trader.";
        conditions = "";
    };
    class petroleum {
        variable = "petroleum";
        displayName = "Petroleum";
        weight = 10;
        buyPrice = -1;
        sellPrice = 900;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = false;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_oilProcessed.paa";
        description = "Can be collected from an oil reserved and delivered to petrol stations.";
        conditions = "";
    };
    class uranium_ore {
        variable = "uranium_ore";
        displayName = "Uranium Ore";
        weight = 7;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_uraniumore.paa";
        description = "Ready to be processed into barrels.";
        conditions = "";
    };
    class uranium_barrel {
        variable = "uranium_barrel";
        displayName = "Uranium Barrel";
        weight = 5;
        buyPrice = 31000;
        sellPrice = 16980;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_uraniumbarrel.paa";
        description = "Uranium Barrel up ready to be shipped to the highest bidder!";
        conditions = "";
    };
    class uncut_opal {
        variable = "uncut_opal";
        displayName = "Uncut Opal";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1980;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_opalUncut.paa";
        description = "A rare gem that can be found throughout various mines on Altis.";
        conditions = "";
    };
    class cut_opal {
        variable = "cut_opal";
        displayName = "Cut Opal";
        weight = 1;
        buyPrice = -1;
        sellPrice = 5940;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_opal.paa";
        description = "A finely cut gem that has been processed perfectly.";
        conditions = "";
    };
    class uncut_sapphire {
        variable = "uncut_sapphire";
        displayName = "Uncut Sapphire";
        weight = 4;
        buyPrice = -1;
        sellPrice = 3483;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_sapphireUncut.paa";
        description = "A rare gem that can be found throughout various mines on Altis.";
        conditions = "";
    };
    class cut_sapphire {
        variable = "cut_sapphire";
        displayName = "Cut Sapphire";
        weight = 2;
        buyPrice = -1;
        sellPrice = 11250;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_sapphire.paa";
        description = "A finely cut gem that has been processed perfectly.";
        conditions = "";
    };
    class uncut_ruby {
        variable = "uncut_ruby";
        displayName = "Uncut Ruby";
        weight = 3;
        buyPrice = -1;
        sellPrice = 4900;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_rubyUncut.paa";
        description = "A rare gem that can be found throughout various mines on Altis.";
        conditions = "";
    };
    class cut_ruby {
        variable = "cut_ruby";
        displayName = "Cut Ruby";
        weight = 1;
        buyPrice = -1;
        sellPrice = 7800;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_ruby.paa";
        description = "A finely cut gem that has been processed perfectly.";
        conditions = "";
    };
    class uncut_emerald {
        variable = "uncut_emerald";
        displayName = "Uncut Emerald";
        weight = 1;
        buyPrice = -1;
        sellPrice = 6400;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_emeraldUncut.paa";
        description = "A rare gem that can be found throughout various mines on Altis.";
        conditions = "";
    };
    class cut_emerald {
        variable = "cut_emerald";
        displayName = "Cut Emerald";
        weight = 1;
        buyPrice = -1;
        sellPrice = 14700;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_emerald.paa";
        description = "A finely cut gem that has been processed perfectly.";
        conditions = "";
    };
    class uncut_diamond {
        variable = "uncut_diamond";
        displayName = "Uncut Diamond";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_diamondUncut.paa";
        description = "A rare gem that can be found throughout various mines on Altis.";
        conditions = "";
    };
    class cut_diamond {
        variable = "cut_diamond";
        displayName = "Cut Diamond";
        weight = 1;
        buyPrice = -1;
        sellPrice = 4600;
        illegal = false;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_diamondCut.paa";
        description = "A finely cut gem that has been processed perfectly.";
        conditions = "";
    };
    class goldbar {
        variable = "goldbar";
        displayName = "Marked Goldbar";
        weight = 15;
        buyPrice = -1;
        sellPrice = 412000;
        illegal = true;
        save = false;
        taxed = true;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_goldBar.paa";
        description = "Can be found in the HM. Treasury. Marked gold can be unmarked at the goldsmiths.";
        conditions = "";
    };
    class goldbarunmarked {
        variable = "goldbarunmarked";
        displayName = "Unmarked Goldbar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 348695;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_goldBar.paa";
        description = "Can be made by taking a gold bar to the goldsmith.";
        conditions = "";
    };
    class plutonium {
        variable = "plutonium";
        displayName = "Plutonium";
        weight = 10;
        buyPrice = -1;
        sellPrice = 180950;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_plutonium.paa";
        description = "A radioactive material found inside the destroyer.";
        conditions = "";
    };
    class plutonium239 {
        variable = "plutonium239";
        displayName = "Plutonium-239";
        weight = 10;
        buyPrice = -1;
        sellPrice = 248200;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_plutonium.paa";
        description = "A radioactive material that has been processed from plutonium found inside the destroyer and enriched within a nuclear reactor.";
        conditions = "";
    };
    class moneybag {
        variable = "moneybag";
        displayName = "Money Bag";
        weight = 12;
        buyPrice = -1;
        sellPrice = 185000;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_moneybag.paa";
        description = "A bag of money found in the Altis Casino vault.";
        conditions = "";
    };
    class launderedcash {
        variable = "launderedcash";
        displayName = "Laundered Cash";
        weight = 10;
        buyPrice = -1;
        sellPrice = 225750;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_moneybag.paa";
        description = "Money that has been laundered at the laundromat.";
        conditions = "";
    };
    class chest {
        variable = "chest";
        displayName = "Treasure Chest";
        weight = 10;
        buyPrice = -1;
        sellPrice = 220000;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_chest.paa";
        description = "You find these at shipwrecks located round Altis.";
        conditions = "";
    };
    class antique {
        variable = "antique";
        displayName = "Antique";
        weight = 5;
        buyPrice = -1;
        sellPrice = 85000;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_chest.paa";
        description = "You find these at shipwrecks located round Altis.";
        conditions = "";
    };
    class stolen_cargo {
        variable = "stolen_cargo";
        displayName = "Stolen Cargo";
        weight = 10;
        buyPrice = -1;
        sellPrice = 28225;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_stolenCargo.paa";
        description = "These can be collected from smuggler hideouts and transported across bordered for a large reward.";
        conditions = "";
    };
    class weaponspart1 {
        variable = "weaponspart1";
        displayName = "Weapon Parts";
        weight = 3;
        buyPrice = 1500;
        sellPrice = 750;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_weaponpart1.paa";
        description = "Weapon parts to create a gun!";
        conditions = "";
    };
    class weaponspart2 {
        variable = "weaponspart2";
        displayName = "Weapon Parts";
        weight = 3;
        buyPrice = 1500;
        sellPrice = 750;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_weaponpart2.paa";
        description = "Weapon parts to create a gun!";
        conditions = "";
    };
    class weapon {
        variable = "weapon";
        displayName = "Weapon Crate";
        weight = 6;
        buyPrice = -1;
        sellPrice = 14000;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_weaponsell.paa";
        description = "A crate with weapons you can sell at the weapon dealer.";
        conditions = "";
    };
    class cannabis {
        variable = "cannabis";
        displayName = "Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = 4333;
        illegal = "weed";
        save = false;
        taxed = false;
        marketDisplay = true;
        processedItem = "marijuana";
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_cannabis.paa";
        description = "Collected from the weed field, processed into marijuana and sold at any drug dealer.";
        conditions = "";
    };
    class marijuana {
        variable = "marijuana";
        displayName = "Marijuana";
        weight = 3;
        buyPrice = 8800;
        sellPrice = 7550;
        illegal = "weed";
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_marijuana.paa";
        description = "Classic OG kush. Snoop would be proud. Sold at any drug dealer. Processed from cannabis collected at the weed field. Also has some medicinal effects.";
        conditions = "";
    };
    class heroin_unprocessed {
        variable = "heroin_unprocessed";
        displayName = "Opium Poppy";
        weight = 4;
        buyPrice = -1;
        sellPrice = 3389;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        processedItem = "heroin_processed";
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_heroinUnprocessed.paa";
        description = "This is the nasty shit. Can be processed into pure herion and sold at any drug dealer.";
        conditions = "";
    };
    class heroin_processed {
        variable = "heroin_processed";
        displayName = "Heroin";
        weight = 2;
        buyPrice = 14605;
        sellPrice = 8825;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_heroinProcessed.paa";
        description = "Can be created from opium poppy and sold at any drug dealer. Also makes you lighter on your feet when consumed.";
        conditions = "";
    };
    class cocaine_unprocessed {
        variable = "cocaine_unprocessed";
        displayName = "Coca Leaf";
        weight = 4;
        buyPrice = -1;
        sellPrice = 4667;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        processedItem = "cocaine_processed";
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_cocaineUnprocessed.paa";
        description = "Can be collected at the cocaine field and processed into processed cocaine and sold at any drug dealer.";
        conditions = "";
    };
    class cocaine_processed {
        variable = "cocaine_processed";
        displayName = "Cocaine";
        weight = 2;
        buyPrice = 16600;
        sellPrice = 9080;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_cocaineProcessed.paa";
        description = "The finest cocaine. Sold at any drug dealer (or to Charlie Sheen). Also makes you lighter on your feet when consumed.";
        conditions = "";
    };
    class ephedrine_barrels {
        variable = "ephedrine_barrels";
        displayName = "Ephedrine Barrels";
        weight = 10;
        buyPrice = 15200;
        sellPrice = 10000;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_ephedrine.paa";
        description = "Ephedrine Barrels that are used to cook meth.";
        conditions = "";
    };
    class meth_processed {
        variable = "meth_processed";
        displayName = "Meth";
        weight = 4;
        buyPrice = 105000;
        sellPrice = 57782;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_meth.paa";
        description = "Meth. Can be sold at the Meth Hookup. Created by processing Ephedrine barrels. Also makes you lighter on your feet when consumed.";
        conditions = "";
    };
    class sassafras {
        variable = "sassafras";
        displayName = "Sassafras";
        weight = 5;
        buyPrice = -1;
        sellPrice = 4833;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        processedItem = "ecstasy";
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_sassafras.paa";
        description = "Sassafras leaves can be processed into ecstasy.";
        conditions = "";
    };
    class ecstasy {
        variable = "ecstasy";
        displayName = "Ecstasy";
        weight = 4;
        buyPrice = 24590;
        sellPrice = 14670;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_ecstasy.paa";
        description = "This profound love, this sudden mind rush that has you absolutely floored. Can be sold at all dealers. Also makes you lighter on your feet when consumed.";
        conditions = "";
    };
    class moonshine {
        variable = "moonshine";
        displayName = "Moonshine";
        weight = 4;
        buyPrice = 25235;
        sellPrice = 14250;
        illegal = true;
        save = false;
        taxed = false;
        marketDisplay = true;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_moonshine.paa";
        description = "A toxic drink only the bravest dare to brew. Careful of CSAT, word on the streets is they dont like this...";
        conditions = "";
    };

    // Misc. Items
    class bath_water {
        variable = "bath_water";
        displayName = "Belle Delphine's Bath Water";
        weight = 1;
        buyPrice = 69000;
        sellPrice = 34500;
        illegal = true;
        save = true;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = false;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {true, "Thirst"};
            value = 100;
        };
        icon = "ico_bathWater.paa";
        description = "A toxic drink only the bravest dare to brew. Careful of SKY, word on the streets is that he'd kill for this...";
        conditions = "";
    };

    class rock {
        variable = "rock";
        displayName = "Rock";
        weight = 10;
        buyPrice = -1;
        sellPrice = 1;
        illegal = false;
        save = false;
        taxed = false;
        marketDisplay = false;
        class dynmarket {
            dynmaic = true;
            driftPerc = 0.1;
        };
        class edibility {
            edible[] = {false, ""};
            value = -1;
        };
        icon = "ico_rock.paa";
        description = "Can be used to reduce jail time";
        conditions = "";
    };
};
