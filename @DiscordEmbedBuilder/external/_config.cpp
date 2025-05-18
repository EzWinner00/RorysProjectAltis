class CfgDiscordEmbedWebhooks {
    // Webhook URLs should be just the ID/token part (not the full URL)
    Example = "1371786014472802395/YneNutsiKUYJYk1pHLCfEYvtNcRZn09-kOF3QKjNKeXUtRuUI8D6v_giTxW8HFiJBOVd";
    Capture = "1371786014472802395/YneNutsiKUYJYk1pHLCfEYvtNcRZn09-kOF3QKjNKeXUtRuUI8D6v_giTxW8HFiJBOVd";
    KillFeed = "1371788988888645632/tMAu5tHlaZf8YyGTx-PIK_J14BFFr6IfZceMrZEYb99y4EccpxRBT0BB1d23qic81nw6";
};

class CfgDiscordEmbedTemplate {
    title = "";
    description = "";
    url = "";
    color = "";
    timestamp = 0;
    thumbnail = "";
    image = "";

    class Author {
        name = "";
        url = "";
        image = "";
    };

    class Footer {
        text = "";
        image = "";
    };

    fields[] = {
        // {title, content, inline}
    };
};

class CfgDiscordEmbedBuilder {
    class CaptureSite {
        webhook = "Capture"; // Refers to key in CfgDiscordEmbedWebhooks

        class Embeds {
            class Embed1: CfgDiscordEmbedTemplate {
                title = "📍 Territory Captured!";
                description = "%1 from **%2** has captured a **%3**!";
                color = 15548997; // Red
                timestamp = 1;

                class Footer {
                    text = "Project Altis";
                };

                fields[] = {
                    {"Player", "%1", true},
                    {"Gang", "%2", true},
                    {"Captured", "%3", false},
                    {"Time", "%4", false}
                };
            };
        };
    };

    class PlayerKilled {
        webhook = "KillFeed";

        class Embeds {
            class Embed1: CfgDiscordEmbedTemplate {
                title = "💀 Player Executed";
                description = "**%1** was killed by **%2** using `%3`.";
                color = 16711680;
                timestamp = 1;

                class Footer {
                    text = "Project Altis Kill Feed";
                };

                fields[] = {
                    {"Time", "%4", false}
                };
            };
        };
    };

    class PlayerBledOut {
        webhook = "KillFeed";

        class Embeds {
            class Embed1: CfgDiscordEmbedTemplate {
                title = "🩸 Player Bled Out";
                description = "**%1** has bled out.";
                color = 10027008;
                timestamp = 1;

                class Footer {
                    text = "Project Altis Kill Feed";
                };

                fields[] = {
                    {"Time", "%2", false}
                };
            };
        };
    };

    // Optional: Include extra examples
    #include "\@DiscordEmbedBuilder\external\Example.cpp"
    #include "\@DiscordEmbedBuilder\external\Example2.cpp"
};