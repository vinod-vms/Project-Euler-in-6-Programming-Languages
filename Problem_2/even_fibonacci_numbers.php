<?php


function even_fibonacci_numbers($num){
// Written by
//Vinod Mathew Sebastian
$first_num = 0;
$second_num = 1;
$temp = $first_num + $second_num;
$sum = 0;

while($temp < $num) {
    if($temp % 2 == 0){
    	$sum += $temp;
    }
    $first_num = $second_num;
    $second_num = $temp;
    $temp = $first_num + $second_num;
    if($temp > $num) break;
    

}
  
   return $sum;
}