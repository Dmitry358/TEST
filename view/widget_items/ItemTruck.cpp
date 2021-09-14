#include "ItemTruck.h"

ItemTruck::ItemTruck(QString _make, QString _model, QString _registrationYear, QString _mileage, QString _fullPrice,
                     QString _fuelType, QString _transmissionType, QString _power, QString _displacement,
                     QString _maxLoadability, QString _sleepingPlace, QString _dangerousGood, QWidget* parent):

                     QWidget(parent),
                     make(new QLabel(_make, this)),
                     model(new QLabel(_model, this)),
                     registrationYear(new QLabel(_registrationYear, this)),
                     mileage(new QLabel(_mileage, this)),
                     fullPrice(new QLabel(_fullPrice, this)),
                     fuelType(new QLabel(_fuelType, this)),
                     transmissionType(new QLabel(_transmissionType, this)),
                     power(new QLabel(_power, this)),
                     displacement(new QLabel(_displacement, this)),

                     maxLoadability(new QLabel(_maxLoadability, this)),
                     sleepingPlace(new QLabel(_sleepingPlace, this)),
                     dangerousGood(new QLabel(_dangerousGood, this))

{
    QVBoxLayout* mainLayout=new QVBoxLayout(this);
    mainLayout->setSpacing(2);

    QHBoxLayout* makeLayout=new QHBoxLayout();
    makeLayout->addWidget(new QLabel("Marca:", this));
    makeLayout->addWidget(make);
    mainLayout->addLayout(makeLayout);

    QHBoxLayout* modelLayout=new QHBoxLayout();
    modelLayout->addWidget(new QLabel("Modello:", this));
    modelLayout->addWidget(model);
    mainLayout->addLayout(modelLayout);

    QHBoxLayout* yearLayout=new QHBoxLayout();
    yearLayout->addWidget(new QLabel("Anno:", this));
    yearLayout->addWidget(registrationYear);
    mainLayout->addLayout(yearLayout);

    QHBoxLayout* mileageLayout=new QHBoxLayout();
    mileageLayout->addWidget(new QLabel("Km:", this));
    mileageLayout->addWidget(mileage);
    mainLayout->addLayout(mileageLayout);

    QHBoxLayout* priceLayout=new QHBoxLayout();
    priceLayout->addWidget(new QLabel("Prezzo:", this));
    priceLayout->addWidget(fullPrice);
    mainLayout->addLayout(priceLayout);

    QHBoxLayout* fuelTypeLayout=new QHBoxLayout();
    fuelTypeLayout->addWidget(new QLabel("Carburante:", this));
    fuelTypeLayout->addWidget(fuelType);
    mainLayout->addLayout(fuelTypeLayout);

    QHBoxLayout* transmissionTypeLayout=new QHBoxLayout();
    transmissionTypeLayout->addWidget(new QLabel("Trassmissione:", this));
    transmissionTypeLayout->addWidget(transmissionType);
    mainLayout->addLayout(transmissionTypeLayout);

    QHBoxLayout* powerLayout=new QHBoxLayout();
    powerLayout->addWidget(new QLabel("Potenza:", this));
    powerLayout->addWidget(power);
    mainLayout->addLayout(powerLayout);

    QHBoxLayout* displacementLayout=new QHBoxLayout();
    displacementLayout->addWidget(new QLabel("Cilindrarta:", this));
    displacementLayout->addWidget(displacement);
    mainLayout->addLayout(displacementLayout);

    QHBoxLayout* maxLoadabilityLayout=new QHBoxLayout();
    maxLoadabilityLayout->addWidget(new QLabel("Portata massima:", this));
    maxLoadabilityLayout->addWidget(maxLoadability);
    mainLayout->addLayout(maxLoadabilityLayout);

    QHBoxLayout* sleepingPlaceLayout=new QHBoxLayout();
    sleepingPlaceLayout->addWidget(new QLabel("Posto per dormire:", this));
    sleepingPlaceLayout->addWidget(sleepingPlace);
    mainLayout->addLayout(sleepingPlaceLayout);

    QHBoxLayout* dangerousGoodLayout=new QHBoxLayout();
    dangerousGoodLayout->addWidget(new QLabel("Sostanze pericolose:", this));
    dangerousGoodLayout->addWidget(dangerousGood);
    mainLayout->addLayout(dangerousGoodLayout);
}
