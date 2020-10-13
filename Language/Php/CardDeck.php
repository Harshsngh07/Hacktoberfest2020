<?php

/**
 * A deck of cards that can be shuffled and have cards drawn from
 *
 * Class CardDeck
 */

class CardDeck
{
    const SUITS = [
        'spades',
        'hearts',
        'clubs',
        'diamonds'
    ];

    const VALUES = [
        'Ace',
        'Two',
        'Three',
        'Four',
        'Five',
        'Six',
        'Seven',
        'Eight',
        'Nine',
        'Ten',
        'Jack',
        'Queen',
        'King'
    ];

    protected $deck;
    protected $discard;

    public function __construct() {
        $deck = [];

        foreach (self::SUITS as $suit) {
            foreach (self::VALUES as $value) {
                $deck[] = "$value of $suit";
            }
        }

        $this->deck = $deck;
        $this->discard = [];
    }

    /**
     * Shuffles the remaining cards in the deck
     */
    public function shuffle()
    {
        shuffle($this->deck);
    }

    /**
     * Draws a card and adds it to the discard pile
     * @return string The card drawn
     */
    public function draw()
    {
        // If deck is empty, shuffle the discard to form a new deck
        if (count($this->deck) === 0) {
            $this->deck = $this->discard;
            $this->shuffle();

            $this->discard = [];
        }

        // Draw the first card of the deck and discard it
        $card = array_shift($this->deck);
        $this->discard[] = $card;

        return $card;
    }
}
