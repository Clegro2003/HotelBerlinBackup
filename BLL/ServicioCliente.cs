using Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace BLL
{
    public class ServicioCliente: ICliente
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
                if (GetById(cliente.Id)!=null)
                {
                    return "El cliente ya se encuentra registrado";
                }
                clientes.Add(cliente);
                return "Datos registrados correctamente";
            }
            catch (Exception)
            {
                return "cliente no agregado";
            }
        }

        public string Delete(Cliente cliente)
        {
            if (GetById(cliente.Id)!=null)
            {
                clientes.Remove(cliente);
                return "cliente eliminado";
            }
            return "votante no eliminado";
        }

        public Cliente GetById(string id)
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
