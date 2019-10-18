<?php

/**
 * Search item within an array using Binary search algorithm
 */
class BinarySearch
{
    public $position = 0;
    public function search($hayStack, $needle)
    {
        if (count($hayStack) === 0) {
            $this->position = -1;
            return $this->position;
        }
        $low = 0;
        $high = count($hayStack) - 1;

        while ($low <= $high) {
            $mid = floor(($low + $high) / 2);
            if ($hayStack[$mid] == $needle) {
                return $mid;
            }

            if ($needle < $hayStack[$mid]) {
                $high = $mid - 1;
            } else {
                $low = $mid + 1;
            }
        }

        $this->position = -1;
        return $this->position;
    }

}
$searchableArray = [1, 2, 3, 4, 5, 10, 6, 7, 8, 9, 10];
$key = 10;
echo (new BinarySearch)->search($searchableArray, $key);
