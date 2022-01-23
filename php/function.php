<!DOCTYPE html>

<html>
    <head>
        <title>Function</title>
    </head>
    <body>
        <form action="function.php", method="get">
            Name:<input type="text", name="name"><br>
            Age:<input type="number", name="age">
            <input type="submit"><br>
        </form>
        <?php
            function hello($name, $age)
            {
                echo "Hello $name, you're $age years old";
            }
            hello($_GET["name"], $_GET["age"]);
        ?>

    </body>
</html>