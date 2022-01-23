<!DOCTYPE html>
<html>

<head>
    <title>
        Mad Libs Game
    </title>
</head>

<body>
    <form action="mad_libs_game.php" method="get">
        Aku adalah <input type="text" name="makhluk"><br>
        Suka makan <input type="text" name="makanan"><br>
        Aku sayang <input type="text" name="someone"><br>
        Aku benci <input type="text" name="whatever"><br>
        <input type="submit">
    </form>
    <br>
    <?php
    $makhluk = $_GET["makhluk"];
    $makanan = $_GET["makanan"];
    $someone = $_GET["someone"];
    $whatever = $_GET["whatever"];

    echo "Aku adalah $makhluk <br>";
    echo "Suka makan $makanan <br>";
    echo "Aku sayang $someone <br>";
    echo "Aku benci $whatever <br>";    
    ?>
</body>

</html>