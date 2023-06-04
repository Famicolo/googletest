APPDocker=$(type -P docker)
if [ -z "$APPDocker" ]; then 
    echo "Docker io non installato"; else 
    echo "Docker correttamente installato"; fi

APPGpp=$(type -P docker)
if [ -z "$APPGpp" ]; then 
    echo "g++ non installato"; else 
    echo "g++ correttamente installato"; fi

    
