<!DOCTYPE html>

<html>

<head>
    <meta charset="utf-8">
    <title>
    </title>
</head>

<body>
    <?php
    //constants
    define("BRAM", "KONTOL");
    $temp = "Hey";
    echo "$temp[2] World<br>";
    $temp = 80;
    echo "$temp World";
    $temp = "Hakuna Matata";
    // string function
    echo "<br> ", strlen($temp), " ", strtoupper($temp), " ",  $temp[2];
    //2^3
    echo 2 ** 3;
    $first_name = "John";
    $last_name = "Wick";
    $full_name = $first_name . " " . $last_name;

    echo "<br>$full_name<br>";

    echo "<br>$first_name" , ' ' . "$last_name";

    echo '<br>' . $first_name , ' ' . $last_name;

    echo '<br>$full_name';
    
    echo '<br>' . BRAM;
    ?>

</body>

</html>