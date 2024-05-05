using BLL;
using Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace GUI
{
    /// <summary>
    /// Lógica de interacción para MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        private ServicioCliente servicioncliente = new ServicioCliente();
        public MainWindow()
        {
            InitializeComponent();
        }



        private void clickAdd(object sender, RoutedEventArgs e)
        {

            Cliente cliente = new Cliente();
            {
                cliente.Id = txtId.Text;
                cliente.Apellido = txtApellido.Text;
                cliente.Nombre = txtNombre.Text;
                cliente.Correo = txtCorreo.Text;
                cliente.Telefono = txtTelefono.Text;

            }

            ;

            // Agregar el cliente utilizando el servicio
            string resultado = servicioncliente.Add(cliente);

            // Mostrar un mensaje dependiendo del resultado de la operación
            MessageBox.Show(resultado);

            // Si la operación fue exitosa, actualizar el DataGrid
            if (resultado == "Datos registrados correctamente")
            {
                // Obtener la lista actualizada de clientes
                var clientes = servicioncliente.GetAllClientes();

                // Asignar la lista de clientes al DataGrid
                dataGridClientes.ItemsSource = clientes;
            }
        }
    }
}
