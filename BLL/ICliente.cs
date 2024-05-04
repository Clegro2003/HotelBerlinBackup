using Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BLL
{
    public interface ICliente
    {
        string Add(Cliente cliente);
        string Delete(Cliente cliente);
        List<Cliente> GetAllClientes();
    }
}