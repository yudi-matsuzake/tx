#ifndef CLIENT_H
#define CLIENT_H
#include "account.h"
#include <QString>
#include <QList>

class Account;

class Client
{
public:
	Client();
	Client(const QString& cpf, const QString& name);
	bool read(const QJsonObject& json);
	bool write(QJsonObject& json) const;
	QList<Account> accounts;

	QString getCpf() const;
	void setCpf(const QString &value);

	QString getName() const;
	void setName(const QString &value);

private:
	static const QString JSON_TYPE;
	QString cpf;
	QString name;
};

#endif // CLIENT_H
