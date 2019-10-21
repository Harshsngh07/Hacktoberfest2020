<?php
/**
 * This code implement dependency injection design pattern
 */

class WebAppRequirements
{
    private $frontEnd, $backEnd, $database;

    /**
     * Web app requirements depends upon frontend backend database
     *
     * @param string $frontEnd
     * @param string $backEnd
     * @param string $database
     */
    public function __construct(string $frontEnd, string $backEnd, string $database)
    {
        $this->frontEnd = $frontEnd;
        $this->backEnd = $backEnd;
        $this->database = $database;
    }

    /**
     * Get frontend technology
     *
     * @return string
     */
    public function getFrontEndTech(): string
    {
        return $this->frontEnd;
    }

    /**
     * Get backend technology
     *
     * @return string
     */
    public function getBackEndTech(): string
    {
        return $this->backEnd;
    }

    /**
     * Get database technology
     *
     * @return string
     */
    public function getDatabaseTech(): string
    {
        return $this->database;
    }
}

class WebApp
{
    private $webAppStack;

    /**
     * Web app depends on requirements to construct
     *
     * @param WebAppRequirements $requirements
     */
    public function __construct(WebAppRequirements $requirements)
    {
        $this->webAppStack = $requirements;
    }

    /**
     * Get web app stack
     *
     * @return string
     */
    public function getWebAppStack(): string
    {
        return 'This web app built with: ' .
        $this->webAppStack->getFrontEndTech() . " " .
        $this->webAppStack->getBackEndTech() . " " .
        $this->webAppStack->getDatabaseTech() . " ";
    }
}

$stack = new WebAppRequirements('react', 'nodejs', 'mysql');
echo (new WebApp($stack))->getWebAppStack();
