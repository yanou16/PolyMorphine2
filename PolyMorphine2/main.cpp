#include <memory>       
#include "Instrument.h" 
int main() {
    unique_ptr<Instrument> instrument; 
    int choix;

    
    cout << "Quel instrument voulez-vous jouer ? (1: Saxophone, 2: Piano) : ";
    cin >> choix;

    
    if (choix == 1) {
        instrument = make_unique<Saxophone>();
    }
    else if (choix == 2) {
        instrument = make_unique<Piano>();
    }
    else {
        cout << "Choix invalide." << endl;
        return 1;
    }

  
    instrument->jouer();

    return 0;
}
