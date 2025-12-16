#include <iostream>
#include <string>

using namespace std;

/* ========= GLOBAL VARIABLES ========= */
bool isMerciful = false;
bool isRomanticTensionActive = false;
bool streetFightSuccess = false;

int Blazer_Impression_Score = 0;
int Robert_Mercy_Rating = 0;

string combatStyle = "Undecided";
string publicReputation = "Popular";

/* ========= FUNCTION DECLARATIONS ========= */
void printDispatchGameLogo();
void scene_interrogation();
void scene_street_fight();
void scene_bar_flambae();
void scene_billboard();
void scene_combat_toxic();
void epilogue_summary();

/* ========= MAIN ========= */
int main() {
    printDispatchGameLogo();   

    cout << "The choices you make will shift Robert's journey from being a superhero to dispatcher.\n\n";
    cout << "\n               G A M E\n";
    cout << endl;
    cin.get();
    scene_interrogation();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    scene_combat_toxic();
    epilogue_summary();

    return 0;

}

/* ========= LOGO ========= */
void printDispatchGameLogo() {
    cout << "██████╗ ██╗███████╗██████╗  █████╗ ████████╗ ██████╗██╗  ██╗\n";
    cout << "██╔══██╗██║██╔════╝██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║  ██║\n";
    cout << "██║  ██║██║███████╗██████╔╝███████║   ██║   ██║     ███████║\n";
    cout << "██║  ██║██║╚════██║██╔═══╝ ██╔══██║   ██║   ██║     ██╔══██║\n";
    cout << "██████╔╝██║███████║██║     ██║  ██║   ██║   ╚██████╗██║  ██║\n";
    cout << "╚═════╝ ╚═╝╚══════╝╚═╝     ╚═╝  ╚═╝   ╚═╝    ╚═════╝╚═╝  ╚═╝\n";
}
/* ========= SCENE 1: APARTMENT INTERROGATION ========= */
void scene_interrogation() {
    int choice;

    cout << "=== DISPATCH: EPISODE 1 — PIVOT ===\n";
    cin.get();
    cout << "\n[Apartment Rooftop]\n";
    cout << "You are playing as Robert, interrogating the Soothing Goon as he soon dangled on the ledge..\n";
    cout << "Soothing Goon: \"Please! I’ll talk! Just don’t drop me!\"\n";
    cin.get();
    cout << "1. Pull him back\n";
    cout << "2. Let him drop\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
    isMerciful = true;
    Robert_Mercy_Rating += 10;
    publicReputation = "Compassionate";

    cout << "\nRobert: \"You’re done running. Talk.\"\n";
    cout << "You haul him back to safety. He breaks instantly.\n";
    cin.get();
        
    } else if (choice == 2) {
    isMerciful = false;
    Robert_Mercy_Rating -= 5;
    publicReputation = "Ruthless";

    cout << "\nRobert: \"Wrong answer.\"\n";
    cout << "You release him. The fall is loud. Plummeting your reputation deeper.\n";
    cin.get();
        
    } else {
    isMerciful = false;
    Robert_Mercy_Rating -= 2;
    publicReputation = "Unpredictable";

    cout << "\nYou hesitate for too long.\n";
    cout << "The Soothing Goon slips from your grasp and falls anyway.\n";
    cout << "People later question your decisiveness.\n";
    cin.get();
        
    }

}

/* ========= SCENE 2: STREET FIGHT ========= */
void scene_street_fight() {
    int choice;

    cout << "\n[Alleyway Confrontation]\n";
    cout << "A thug rushes you with a crowbar.\n\n";
    cin.get();
    cout << "1. Right Hand Punch\n";
    cout << "2. Left Hand Punch\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
    streetFightSuccess = false;

    cout << "\nYou swing right.\n";
    cout << "The thug anticipates it and cracks you with the crowbar.\n";
    cin.get();
        
    } else if (choice == 2) {
    streetFightSuccess = true;

    cout << "\nYou pivot and strike with your left.\n";
    cout << "Clean hit. The thug collapses instantly.\n";
    cin.get();
        
    } else {
    streetFightSuccess = false;

    cout << "\nYou freeze for a split second.\n";
    cout << "The hesitation costs you as the crowbar slams into your ribs.\n";
    cin.get();
        
    }

}
/* ========= SCENE 3: SUPERHERO BAR (FLAMBAE) ========= */
void scene_bar_flambae() {
    int choice;

    cout << "\n[Superhero Bar]\n";
    cout << "Flambae loses control as the flames crawl up the walls.\n";
    cin.get();
    cout << "1. Throw Water\n";
    cout << "2. Throw Alcohol\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 2) {
        Blazer_Impression_Score += 15;

        cout << "\nThe alcohol ignites everything.\n";
        cout << "The fire erupts violently as chaoe erupts, making Flambae leave.\n";
        cin.get();

    } else {
        // Water choice OR invalid input defaults here
        Blazer_Impression_Score += 5;

        cout << "\nYou react and grab water.\n";
        cout << "The flames hiss and die down almost instantly .\n";
        cout << "Flambae screams as the steam burns linger.\n";
        cin.get();

        if (choice != 1) {
            cout << "Your hesitation costs you a second, but water was the safest call.\n";
            cout << "Flambae screams as the steam burns linger.\n";
            cout << "Blonde Blazer will remember your quick recovery.\n";
            cin.get();
        }
    }
}

/* ========= SCENE 4: BILLBOARD ROMANCE ========= */
void scene_billboard() {
    int choice;

    cout << "\n[Billboard Above the City]\n";
    cout << "Wind howls as silence engulf both of you.\n";
    cout << "Blonde Blazer sits by close as she carefully examines you upclose.\n\n";
    cin.get();
    cout << "1. Kiss her\n";
    cout << "2. Let the moment pass\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
    isRomanticTensionActive = true;
    Blazer_Impression_Score += 10;

    cout << "\nYou lean in.\n";
    cout << "The kiss is awkward… but real.\n";
    cin.get();
        
    } else if (choice == 2) {
    isRomanticTensionActive = false;

    cout << "\nYou step back.\n";
    cout << "Blonde Blazer nods, understanding.\n";
    cin.get();
        
    } else {
    isRomanticTensionActive = false;
    Blazer_Impression_Score -= 3;

    cout << "\nYou say nothing.\n";
    cout << "The silence becomes uncomfortable.\n";
    cout << "The moment quietly fades away.\n";
    cin.get();
        
    }

}
/* ========= SCENE 5: COMBAT DECISION (TOXIC) ========= */
void scene_combat_toxic() {
    int choice;

    cout << "\n[Final Encounter: Toxic]\n";
    cout << "Toxic snarls, preparing to strike.\n\n";
    cin.get();
    cout << "1. Punt him away\n";
    cout << "2. Stomp him down\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
    combatStyle = "Creative";

    cout << "\nYou punt Toxic across the street.\n";
    cout << "Improvised. Effective.\n";
    cin.get();
        
    } else if (choice == 2) {
    combatStyle = "Brutal";

    cout << "\nYou stomp down hard.\n";
    cout << "The fight ends immediately.\n";
    cin.get();
        
    } else {
    combatStyle = "Reckless";

    cout << "\nYou hesitate at the worst possible moment.\n";
    cout << "Toxic nearly turns the fight around before you recover.\n";
    cin.get();
        
    }

}
/* ========= EPILOGUE ========= */
void epilogue_summary() {
    cout << "\n=== EPILOGUE ===\n";
    cin.get();

    if (isMerciful) {
        cout << "Robert becomes a leader defined by restraint and control.\n";
    } else {
        cout << "Robert becomes feared — efficient, unstoppable.\n";
    }

    if (streetFightSuccess) {
        cout << "The streets whisper about your precision.\n";
    } else {
        cout << "The streets whisper about your scars.\n";
    }

    if (isRomanticTensionActive) {
        cout << "Blonde Blazer remembers the kiss above the city.\n";
    } else {
        cout << "Blonde Blazer remembers your restraint.\n";
    }

    if (Blazer_Impression_Score >= 20) {
        cout << "Public opinion: Legendary presence.\n";
    } else {
        cout << "Public opinion: Distant protector.\n";
    }

    cout << "\nFinal Stats:\n";
    cout << "Mercy Rating: " << Robert_Mercy_Rating << endl;
    cout << "Blazer Impression Score: " << Blazer_Impression_Score << endl;
    cout << "Combat Style: " << combatStyle << endl;
    cout << "Reputation: " << publicReputation << endl;
    cin.get();
    
    cout << "\n=== END OF EPISODE 1 ===\n";
}
