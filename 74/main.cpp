// No arquivo banco.h

#ifndef Banco_h
#define Banco_h

#include <string>

class Pessoa {
public:
  Pessoa(const std::string& nome, const std::string& endereco);
  virtual ~Pessoa();

  const std::string& getNome() const;
  const std::string& getEndereco() const;

  virtual void exibirDados() const = 0;

private:
  std::string nome;
  std::string endereco;
};

class PessoaFisica : public Pessoa {
public:
  PessoaFisica(const std::string& nome, const std::string& endereco, const std::string& cpf);
  virtual ~PessoaFisica();

  const std::string& getCPF() const;

  virtual void exibirDados() const override;

private:
  std::string cpf;
};

class PessoaJuridica : public Pessoa {
public:
  PessoaJuridica(const std::string& nome, const std::string& endereco, const std::string& cnpj);
  virtual ~PessoaJuridica();

  const std::string& getCNPJ() const;

  virtual void exibirDados() const override;

private:
  std::string cnpj;
};

#endif
