#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto
{
    public:

        ///Setters:
        void setNombre(char[20]);
        void setPrecio(float);
        void setID(int);
        void setTipoDeProducto(int);

        ///Getters:
        void getNombre();
        float getPrecio();
        int getID();
        int getTipoDeProducto();

    private:

        char _nombre[20];
        float _precio;
        int _id, _tipoDeProducto;

        void mostrarCadena(char[20]);


};

#endif // PRODUCTO_H
