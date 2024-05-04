using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Entity
{
    public class Administrador
    {
        public int Id { get; set; }
        public string Nombre { get; set; }
        public string Apellido { get; set;}

        public Administrador() 
        {
            this.Id = 0123456789;
            this.Nombre = "Carlos";
            this.Apellido = "Legro";
        }

        public Administrador (int id, string nombre, string apellido)
        {
            Id = id;
            Nombre = nombre;
            Apellido = apellido;
        }
    }
}
