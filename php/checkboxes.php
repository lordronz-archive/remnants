<!DOCTYPE html>
<html>

<head>
    <title>
        Form
    </title>
</head>

<body>
    <form action="checkboxes.php" , method="post">
        C/C++ <input type="checkbox" , name="language[]" , value="C/C++"><br>
        Python <input type="checkbox" , name="language[]" , value="Python"><br>
        PHP <input type="checkbox" , name="language[]" , value="PHP">
        <input type="submit"><br>
    </form>
    <br>
    <?php
        $language = $_POST["language"];
        echo $language[0], "<br>";
        echo count($language);
        //associative array below
        $grades = array("Eko" => "A+", "Aaron" => "A++", "Mulyanto" => "A");
        echo "<br>", $grades["Aaron"];
    ?>
</body>

</html>