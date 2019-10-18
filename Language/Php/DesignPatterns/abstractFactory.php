<?php
/**
 * This code implements abstract factory design pattern
 */
interface Cycle
{
    public function vehiclePrice(): int;
}

class Bicycle implements Cycle
{
    private $price;

    public function __construct(int $price)
    {
        $this->price = $price;
    }

    public function vehiclePrice(): int
    {
        return $this->price;
    }

}

class MotorCycle implements Cycle
{
    private $price;

    public function __construct(int $price, int $licenseCost)
    {
        $this->price = $price + $licenseCost;
    }

    public function vehiclePrice(): int
    {
        return $this->price;
    }
}

class VehicleFactory
{
    const LICENSE_COST = 5000;
    public function createBicycle(int $price): Bicycle
    {
        return new Bicycle($price);
    }

    public function createMotorCycle(int $price): MotorCycle
    {
        return new MotorCycle($price, self::LICENSE_COST);
    }
}

/**
 * Test Abstract Factory
 */
$vehicleFactory = new VehicleFactory();
print_r($vehicleFactory->createMotorCycle(10000));
print_r($vehicleFactory->createBicycle(8000));
