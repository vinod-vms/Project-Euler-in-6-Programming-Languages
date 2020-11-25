<?php

function multiples_of_3_and_5($num){
    /*
    *Written by
    *Vinod Mathew Sebastian
    */
	$sum = 0;
	
	if($num < 1){
		echo "Please enter a positive number.";
	}
else
	{
		for($i=0;$i<$num; $i++){
			if(($i%3 == 0)|| ($i%5 == 0)){
				$sum +=$i;
			}
		}
	}
	echo $sum;
}

multiples_of_3_and_5(10);

?>