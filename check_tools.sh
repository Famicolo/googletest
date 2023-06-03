if ! command -v g++ &> /dev/null 2>&1; then

    echo "Il comando g++ non è installato."
    echo "Installazione di build-essential..."
else
    echo "il comando è correttamente installato"
    #echo $password | sudo -S apt-get update
    #echo $password | sudo -S apt-get install -y build-essential    # -y da assume yes per evitare le richieste nel procedere con l'installazione
    # Utilizza l'opzione -y per confermare automaticamente l'installazione
fi
