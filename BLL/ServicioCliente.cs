using Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace BLL
{
    public class ServicioCliente
    {
        List<Cliente> clientes;

        public ServicioCliente()
        {
            clientes = new List<Cliente>();
        }

        public string Add(Cliente cliente) 
        {
            try
            {

            }
            catch (Exception)
            {

                throw;
            }
            return "";
        }

        public string Delete(Cliente cliente)
        {
            return "";
        }

        public Cliente GetById(int id)
        {
            foreach (var cliente in clientes)
            {
                if (cliente.Id == id)
                {
                    return cliente;
                }
            }
            return null;
        }

        public List<Cliente> GetAllClientes()
        {
            return clientes;
        }
    }
}
