class cashRegister{
    private:
        int cashOnHand; //variable para almacenar el dinero en la caja
    public:
        int getCurrentBalance() const;
         //Función para mostrar la cantidad actual en la caja
         //registradora.
         //Poscondición: Devuelve el valor de cashOnHand.
         void acceptAmount(int amountIn);
         //Función para recibir la cantidad depositada por
         //el cliente y actualizar la cantidad en la caja
         //registradora.
         //Poscondición: cashOnHand = cashOnHand + amountIn;
         cashRegister();
         //Constructor predeterminado
         //Establece el dinero en caja en 500 centavos.
         //Poscondición: cashOnHand = 500.
         cashRegister(int cashIn);
         //Constructor con un parámetro.
         //Establece el dinero en caja en una cantidad específica.
         //Poscondición: cashOnHand = cashIn;
};
