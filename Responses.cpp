#include "Responses.h"



// RESPONSE LIST.
// DETECTS KEY WORSD (2) IN EACH INPUT TO DETERMINE APPROPRIATE OUTPUT.

string inquiry(string text, int key) {

	// -------------------------------- key 1
	if (key == 1)
	{
		if (text == "end")
		{
			return "end";
		}


		if ((text.find("having") != std::string::npos && text.find("trouble") != std::string::npos ) || (text.find("need") != std::string::npos && text.find("help") != std::string::npos))
		{
			return "What seems to be the issue?";
		}
		else if (text.find("can") != std::string::npos && text.find("access") != std::string::npos)
		{
			return "Full access may take up to 24 hours to process. If it has been longer, please contact our support team so we may investigate further.";
		}
		else if (text.find("bought") != std::string::npos && text.find("able") != std::string::npos)
		{
			return "If it has been over 24 hours, please contact our support team for further investigation.";
		}
		else if (text.find("device") != std::string::npos && text.find("play") != std::string::npos)
		{
			return "What device(s) (if any) have worked so far?";
		}
		else if (text.find("phone") != std::string::npos)
		{
			return "This may be an issue with different unsupported browsers being used, try using another. If not, contact our support team.";
		}
		else if (text.find("check") != std::string::npos && text.find("ticket") != std::string::npos)
		{
			return "For support ticket status', check your account details page under TICKETS.";
		}
		else if (text.find("will") != std::string::npos && text.find("resolved") != std::string::npos)
		{
			return "Tickets are viewed by submission order, and may take up two two weeks to resolve from submission date.";
		}
		else if (text.find("video") != std::string::npos && text.find("isn't online") != std::string::npos)
		{
			return "When was this video uploaded?";
		}
		else if (text.find("upload") != std::string::npos && text.find("at") != std::string::npos)
		{
			return "It may take up to 24 hours for uploads to process, if time has exceeded this, a ticket may need to be filed.";
		}
		else if (text.find("open") != std::string::npos && text.find("ticket") != std::string::npos)
		{
			// 
			return "Sending Information to our severs.";
		}
		else if (text.find("video") != std::string::npos && text.find("cut") != std::string::npos)
		{
			return "We have a 10 minute maximum video length policy.";
		}
		else if (text.find("know") != std::string::npos && text.find("max") != std::string::npos)
		{
			return "As of January 2018, Our video length policy has changed.";
		}
		else if (text.find("suggest") != std::string::npos)
		{
			return "We are always open to suggestions! Please submit your suggestion at \"ourWebsite.com\\your_voice_heard\"";
		}
		else if (text.find("sub") != std::string::npos && text.find("not show") != std::string::npos)
		{
			return "When was this video uploaded?";
		}
		else if (text.find("latest") != std::string::npos && text.find("video") != std::string::npos)
		{
			return "In the event of this issue, the videos may be placed there in your account settings.";
		}
		else if (text.find("make") != std::string::npos && text.find("first") != std::string::npos)
		{
			return "This must be manually done under your account settings page, under VIDEO MANAGEMENT - *layout* .";
		}
	else
	{
		return "Please try restating your question. You may also try to contact us located in our support page.";
	}


	}

	// -------------------------------------- key 2
	else if (key == 2)
	{
		if (text == "end")
		{
			return "end";
		}
		if (text.find("pay") != std::string::npos && text.find("how") != std::string::npos)
		{
			return "To Pay for content, click on either the PURCHASE or SUBSCRIBE buttons located near the top right of the content's page or creator's page respectively";
		}
		else if (text.find("stop") != std::string::npos && text.find("sub") != std::string::npos)
		{
			return "In order to cancel a subscription, go to the user's page and click UNSUBSCRIBE near the top right corner.";
		}
		else if (text.find("still") != std::string::npos && text.find("charge") != std::string::npos)
		{
			return "What are you being charged for?";
		}
		else if (text.find("sub") != std::string::npos )
		{
			return "How long ago since you terminated this subscription?";
		}
		else if (text.find("week") != std::string::npos || text.find("day") != std::string::npos)
		{
			return "We apologize for the inconvenience. Please contact our spport team so we may invesitage in further detail.";
		}
		else if (text.find("video") != std::string::npos && text.find("cost") != std::string::npos)
		{
			return "For exact pricing, click on the PURCHASE button located near the top right corner of the content. (It will not auto purchase, but ask for confirmation)";
		}
		else if (text.find("video") != std::string::npos && text.find("cost") != std::string::npos)
		{
			return "For exact pricing, click on the PURCHASE button located near the top right corner of the content. (It will not auto purchase, but ask for confirmation)";
		}
		else if (text.find("sub") != std::string::npos && text.find("cost") != std::string::npos)
		{
			return "For exact pricing, click on the SUBSCRIBE button located near the top right corner of the content. (It will not auto subscribe, but ask for confirmation)";
		}
		else if (text.find("charge") != std::string::npos && text.find("video") != std::string::npos)
		{
			return "To specify how much you wish to charge for your content, go to your account settings page. From there you may specify the cost for each video and subscription cost (while within our threshhold)";
		}
		else if (text.find("sub") != std::string::npos && text.find("my channel") != std::string::npos)
		{
			return "To set up a subscription button, you must first submit a request located in your account settings page, where we will verify authenticity.";
		}
		else if (text.find("not") != std::string::npos && text.find("paid") != std::string::npos)
		{
			return "First payment may take up to a month to process. If it has been longer, please submit a ticket to our support team.";
		}
		else if (text.find("view") != std::string::npos && text.find("since") != std::string::npos)
		{
			return "For statistics regarding to content information (such as viewing and purchases) visit your account details page, and select STATS on your left menu.";
		}
		else if (text.find("paid out") != std::string::npos && text.find("have") != std::string::npos)
		{
			return "To check unpaid balance, visit your account details page under WAGES.";
		}
	else
	{
		return "Please try restating your question. You may also try to contact us located in our support page.";
	}


	}


	// -------------------------------------------- key 3
	else if(key == 3)


		if (text == "end")
		{
			return "end";
		}

	if (text.find("video") != std::string::npos && text.find("kid") != std::string::npos)
	{
		return "Our child friendly videos can be found at \"ourWebsite.com\\videos\\PG\"";
	}
	else if(text.find("video") != std::string::npos && text.find("music") != std::string::npos)
	{
		return "We offer a wide variety of music videos located at \"ourWebsite.com\\videos\\Music\"";
	}
	else if (text.find("video") != std::string::npos && text.find("cosplay") != std::string::npos)
	{
		return "Our Cosplay Videos are found at \"ourWebsite.com\\videos\\Cosplay\"";
	}
	else if (text.find("video") != std::string::npos && text.find("user") != std::string::npos)
	{
		return "To find a specific user created video, enter the following format on your browser, replacing *USER_HERE* with the user you are attempting to find. \"ourWebsite.com\\USER_HERE\\videos\"";
	}
	else
	{
		return "Please try restating your question. You may also try to contact us located in our support page.";
	}




}