#include "GameField.h"
#include "ShipManager.h"
int main() {
    GameField field{10, 10};
    auto ship_manager = ShipManager(3, {3, 1, 2});
    int ships_coords[3][2] = {{5, 4},
                              {1, 4},
                              {30, 1}};
    auto &ships = ship_manager.getShips();
    auto& s = ship_manager.getShipByIndex(9);

    bool positions[] = {false, false, true};
    for (int i = 0; i < 3; i++) {
        field.placeShip(ships[i], ships_coords[i][0], ships_coords[i][1], positions[i]);
    }
    field.attackCell(1, 4);
    field.show();
    field.attackCell(1, 4);
    field.show();

    return 0;
}
