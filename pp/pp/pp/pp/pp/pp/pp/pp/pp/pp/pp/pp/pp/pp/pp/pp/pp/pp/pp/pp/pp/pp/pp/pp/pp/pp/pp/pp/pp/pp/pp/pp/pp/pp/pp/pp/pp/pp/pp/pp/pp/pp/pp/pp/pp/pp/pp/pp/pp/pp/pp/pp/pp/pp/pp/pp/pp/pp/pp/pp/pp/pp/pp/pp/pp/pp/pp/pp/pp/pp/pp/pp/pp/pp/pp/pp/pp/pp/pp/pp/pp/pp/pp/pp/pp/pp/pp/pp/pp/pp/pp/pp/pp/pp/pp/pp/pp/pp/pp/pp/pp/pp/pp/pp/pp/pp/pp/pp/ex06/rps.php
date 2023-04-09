<?php

$str = (string)readline("Choose rock, paper, or scissors:");
$list = array("paper","rock","scissors");

$randome_choix = $list[rand(0,2)];
if($str != rock && $str != scissors  && $str != paper  )
{
    echo "invalid input (rock or scissors or paper )";
}
else if($str == $randome_choix)
{
    echo "It's a tie!";
}else if($str == rock && $randome_choix ==  scissors ||
        $str == scissors && $randome_choix == paper ||
        $str == paper && $randome_choix == rock)
{
    echo "Congratulations! You won! The computer chose ".$randome_choix." .";
}else
{    
    echo "Sorry, you lost. The computer chose ".$randome_choix.".";
}
?>