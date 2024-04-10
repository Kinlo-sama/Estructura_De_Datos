class dispenserType{
    public:
         int getNoOfItems() const;
         //Función para mostrar el número de artículos en la
         //máquina.
         //Poscondición: Devuelve el valor de numberOfItems.
         int getCost() const;
         //Función para mostrar el costo del artículo.
         //Poscondición: Devuelve el valor del costo.
         void makeSale();
         //Función para restar 1 al número de artículos.
         //Poscondición: numberOfItems--;
         dispenserType();
         //Constructor predeterminado
         //Establece el costo y número de artículos en el
         //dispensador en 50.
         //Poscondición: numberOfItems = 50; cost = 50;
         dispenserType(int setNoOfItems, int setCost);
         //Constructor con parámetros
         //Establece el costo y número de artículos en el
         //dispensador
         //en los valores especificados por el usuario.
         //Poscondición: numberOfItems = setNoOfItems;
         // cost = setCost;
    private:
         int numberOfItems; //variable para almacenar el número de
         //artículos en el dispensador
         int cost; //variable para almacenar el costo de un artículo
};
