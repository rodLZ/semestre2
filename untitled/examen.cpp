#include <iostream>
#include <string>
#include "AFORE.H"
int main() {
    Poliza poliza("Juan", "ABC123", "20050101", 1000, 5000, 1);
    imprimirInformacionAfore(poliza);

    SeguroDeCarro seguroCarro("10000", "Sedan", "ABC123", "Juan", "ABC123", 5000);
    imprimirInformacionSeguroCarro(seguroCarro);

    SeguroDeHouse seguroHouse("Grande", "Ciudad", "Alarma", "Maria", "XYZ789", 8000);
    imprimirInformacionSeguroHouse(seguroHouse);

    return 0;
}