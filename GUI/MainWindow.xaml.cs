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
        public MainWindow()
        {
            InitializeComponent();
        }

        private void clickAdd(object sender, RoutedEventArgs e)
        {
            ServicioCliente servicioncliente = new ServicioCliente();
            Cliente cliente = new Cliente();
            cliente.Id = txtId.Text;
            cliente.Apellido = txtApellido.Text;
            cliente.Nombre = txtNombre.Text;
            cliente.Correo = txtCorreo.Text;
            cliente.Telefono = txtTelefono.Text;

            if (servicioncliente.Add(cliente) != "El cliente ya se encuentra registrado")
            {
                listClientes.Items.Add(cliente);
                MessageBox.Show("Datos Registrados");
            }
            else
            {
                MessageBox.Show("Error datos repetidos, entonces no guardados");
            }

        }
    }
}
