CREATE SCHEMA `db_proveedores` ;

CREATE TABLE `db_proveedores`.`proveedores` (
  `idproveedores` INT NOT NULL AUTO_INCREMENT,
  `proveedor` VARCHAR(60) NULL,
  `nit` VARCHAR(12) NULL,
  `direccion` VARCHAR(80) NULL,
  `telefono` VARCHAR(25) NULL,
  PRIMARY KEY (`idproveedores`));

INSERT INTO `db_proveedores`.`proveedores` (`proveedor`, `nit`, `direccion`, `telefono`) VALUES ('Luis Gomez', '45456', 'Guatemala', '123321');
INSERT INTO `db_proveedores`.`proveedores` (`proveedor`, `nit`, `direccion`, `telefono`) VALUES ('Ana Garcia', '75451', 'Antigua', '321123');