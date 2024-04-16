#include <iostream>
#include <map>
#include <string>
#include <cctype> // For std::tolower

int main() {
    // Define a map to store state-capital pairs
  std::map<std::string, std::string> states = {
        { "alabama"       , "Montgomery"     },
        { "alaska"        , "Juneau"         },
        { "arizona"       , "Phoenix"        },
        { "arkansas"      , "Little Rock"    },
        { "california"    , "Sacramento"     },
        { "colorado"      , "Denver"         },
        { "connecticut"   , "Hartford"       },
        { "delaware"      , "Dover"          },
        { "florida"       , "Tallahassee"    },
        { "georgia"       , "Atlanta"        },
        { "hawaii"        , "Honolulu"       },
        { "idaho"         , "Boise"          },
        { "illinois"      , "Springfield"    },
        { "indiana"       , "Indianapolis"   },
        { "iowa"          , "Des Moines"     },
        { "kansas"        , "Topeka"         },
        { "kentucky"      , "Frankfort"      },
        { "louisiana"     , "Baton Rouge"    },
        { "maine"         , "Augusta"        },
        { "maryland"      , "Annapolis"      },
        { "massachusetts" , "Boston"         },
        { "michigan"      , "Lansing"        },
        { "minnesota"     , "Saint Paul"     },
        { "mississippi"   , "Jackson"        },
        { "missouri"      , "Jefferson City" },
        { "montana"       , "Helena"         },
        { "nebraska"      , "Lincoln"        },
        { "nevada"        , "Carson City"    },
        { "new hampshire" , "Concord"        },
        { "new jersey"    , "Trenton"        },
        { "new mexico"    , "Santa Fe"       },
        { "new york"      , "Albany"         },
        { "north carolina", "Raleigh"        },
        { "north dakota"  , "Bismarck"       },
        { "ohio"          , "Columbus"       },
        { "oklahoma"      , "Oklahoma City"  },
        { "oregon"        , "Salem"          },
        { "pennsylvania"  , "Harrisburg"     },
        { "rhode island"  , "Providence"     },
        { "south carolina", "Columbia"       },
        { "south dakota"  , "Pierre"         },
        { "tennessee"     , "Nashville"      },
        { "texas"         , "Austin"         },
        { "utah"          , "Salt Lake City" },
        { "vermont"       , "Montpelier"     },
        { "virginia"      , "Richmond"       },
        { "washington"    , "Olympia"        },
        { "west virginia" , "Charleston"     },
        { "wisconsin"     , "Madison"        },
        { "wyoming"       , "Cheyenne"       }
    };

    // Count the number of states
    int numStates = states.size();
    std::cout << "Number of states: " << numStates << std::endl;

    // Loop for continuous interaction
    while (true) {
        // Prompt user to enter a state
        std::string state;
        std::cout << "Enter a state (or type 'exit' to quit): ";
        std::getline(std::cin, state);

        // Convert input to lowercase
        for (auto& c : state) {
            c = std::tolower(c);
        }

        // Check if user wants to exit
        if (state == "exit") {
            std::cout << "Exiting program." << std::endl;
            break; // Exit the loop
        }

        // Find the capital corresponding to the entered state
        auto it = states.find(state);
        if (it != states.end()) {
            // If state is found, print its capital
            std::cout << "Capital of " << state << " is " << it->second << std::endl;
        } else {
            // If state is not found, print error message
            std::cout << "Capital for " << state << " not found." << std::endl;
        }
    }

    return 0;
}
