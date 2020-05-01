<html>
	<head>
		<title>Sum of consecutive numbers, Assignment 9</title>
	</head>
	<body>
		<?php
		$start = 2; //hardcoded starting value
		$end = 7; //hardcoded ending value
		$consecutive = $end - $start + 1; //finds how many consecutive numbers are in between the start and end values
		$sum = 0;//initializes sum for 0
		
		for($i = $start; $i <= $end; $i++){ //for loop that iterates through the consecutive numbers and adds the current number to the sum
			$sum = $sum + $i;
		}
		echo "The sum of ".$consecutive." consecutive numbers from ".$start." to ".$end." is ".$sum."."; //print statement formatted to include the variables 
		?>
	</body>
</html>