// Copyright 2005-2018 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#ifndef MUMBLE_SELFSIGNEDCERTIFICATE_H_
#define MUMBLE_SELFSIGNEDCERTIFICATE_H_

#include <QtCore/QString>
#include <QtNetwork/QSslCertificate>
#include <QtNetwork/QSslKey>

class SelfSignedCertificate {
private:
	static bool generate(QString clientCertName, QString clientCertEmail, QSslCertificate &qscCert, QSslKey &qskKey);

public:
	static bool generateMumbleCertificate(QString name, QString email, QSslCertificate &qscCert, QSslKey &qskKey);
	static bool generateMurmurV2Certificate(QSslCertificate &qscCert, QSslKey &qskKey);
};

#endif
