/**/**
 * List prime numbers in a range using Sieve of eratosthenes algorithm
 */

<?php
class Sieve
{
    public $range;
    public $primes = [];
    public function __construct($range)
    {
        $this->range = $range;
        $this->primes = array_fill(1, $this->range, 1);
    }

    /**
     * Get all prime number within a range using Sieve algorithm
     *
     * @return array array of prime numbers
     */
    public function getPrimes()
    {
        //exclude 1 from primes
        unset($this->primes[1]);

        //exclude all even composite numbers
        for ($evens = 4; $evens <= $this->range; $evens += 2) {
            $this->primes[$evens] = 0;
        }

        //square root of the range
        $sqrtRange = (int) sqrt($this->range);

        //exclude odd composite numners
        for ($odds = 3; $odds < $sqrtRange; $odds += 2) {
            for ($multiOdds = $odds * $odds; $multiOdds < $this->range; $multiOdds += $odds << 1) {
                $this->primes[$multiOdds] = 0;
            }
        }

        return array_keys(array_filter($this->primes));
    }
}
print_r((new Sieve(10000))->getPrimes());
